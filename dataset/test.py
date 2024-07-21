import joblib
import os
import re
import numpy as np
from collections import defaultdict

# 加载模型、矢量化器和标签编码器
model_dir = 'C:/Users/User/Desktop/C++_topic_classification/dataset/models'
model_path = os.path.join(model_dir, 'multi_label_svm_model.pkl')
vectorizer_path = os.path.join(model_dir, 'vectorizer.pkl')
mlb_path = os.path.join(model_dir, 'mlb.pkl')

model = joblib.load(model_path)
vectorizer = joblib.load(vectorizer_path)
mlb = joblib.load(mlb_path)

# 主题对应的滑动窗口大小
topic_window_sizes = {
    'operator overload': 30,
    'virtual function': 40,
    'file_io': 50,
    'Inheritance': 60,
    'lambda': 25,
    'stl': 45,
    'templates': 35,
    'Classes': 55
}

topic_data_counts = {
    'operator overload': 4939,
    'virtual function': 121,
    'file_io': 1356,
    'Inheritance': 193,
    'lambda': 121,
    'stl': 12,
    'templates': 22142,
    'Classes': 193
}

# 主题对应的颜色
topic_colors = {
    'operator overload': 'lightblue',
    'virtual function': 'lightgreen',
    'file_io': 'yellow',
    'Inheritance': 'lightcoral',
    'lambda': 'lightpink',
    'stl': 'lightgray',
    'templates': 'red',
    'Classes': 'lightsalmon'
}

def remove_comments(code):
    # 去除单行注释
    code = re.sub(r'//.*', '', code)
    # 去除多行注释
    code = re.sub(r'/\*[\s\S]*?\*/', '', code)
    return code

def predict_code_snippet(code_snippet, classifier):
    # 将代码片段转换为TF-IDF特征向量
    X_new_tfidf = vectorizer.transform([code_snippet])
    # 使用分类器进行分类
    prediction = classifier.predict(X_new_tfidf)
    return prediction[0] == 1

def sliding_window_classification(code, window_size, topic, classifier):
    length = len(code)
    counts = np.zeros(length)
    classifications = [None] * length

    start = 0
    while start < length:
        end = min(start + window_size, length)
        window = code[start:end]
        if predict_code_snippet(window, classifier):
            for i in range(start, end):
                counts[i] += 1
        start += 1

    # 最后一次处理窗口中的字符计数
    for i in range(length):
        if counts[i] >= (window_size / 1.2):
            classifications[i] = topic

    return classifications, counts

def bracket_matching_classification(code, classifications):
    length = len(code)
    for topic in classifications:
        start = 0
        for i in range(length):
            if classifications[topic][i] == topic and start == 0:
                start = 1
            elif code[i] == '}':
                start = 0
            elif start == 1:
                classifications[topic][i] = topic
    return classifications

def classify_cpp_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:
        code = file.read()

    code = remove_comments(code)

    all_classifications = defaultdict(lambda: [None] * len(code))
    all_counts = defaultdict(lambda: np.zeros(len(code)))

    for topic, window_size in topic_window_sizes.items():
        classifier_index = mlb.classes_.tolist().index(topic)
        classifier = model.estimators_[classifier_index]
        classifications, counts = sliding_window_classification(code, window_size, topic, classifier)
        all_classifications[topic] = classifications
        all_counts[topic] = counts  # 每个主题单独计数
    all_classifications = bracket_matching_classification(code, all_classifications)
    # 调用括号匹配分类函数
    
   
    return code, all_classifications, all_counts

def generate_html(code, classifications, counts, output_path):
    html_content = '<html><head>'
    html_content += '''
    <script> 
        function updateDisplay() {
            var topic = document.getElementById("topicSelector").value;
            var spans = document.querySelectorAll("span[data-topic]");
            spans.forEach(function(span) {
                if (topic === "" || span.getAttribute("data-topic") === topic) {
                    span.style.display = "inline";
                } else {
                    span.style.display = "none";
                }
            });
        }
    </script>
    </head><body>'''
    
    html_content += '<table border="1" style="margin-bottom: 20px;">'
    html_content += '<tr><th>Topic</th><th>Color</th><th>Window Size</th><th>Data Count</th></tr>'
    for topic, color in topic_colors.items():
        window_size = topic_window_sizes[topic]
        data_count = topic_data_counts[topic]
        html_content += f'<tr><td>{topic}</td><td style="background-color: {color};">&nbsp;&nbsp;&nbsp;&nbsp;</td><td>{window_size}</td><td>{data_count}</td></tr>'
    html_content += '</table>'

    html_content += '''
    <select id="topicSelector" onchange="updateDisplay()">
        <option value="">Select a topic</option>
    '''
    for topic in topic_window_sizes.keys():
        html_content += f'<option value="{topic}">{topic}</option>'
    html_content += '</select>'
    print(code)
    html_content += '<pre>'
    
   
    for i, char in enumerate(code):
        
        color = None
        topic_attr = ""
        
        for topic in classifications: 
            
            if classifications[topic][i]:
                print(classifications[topic][i])
                color = topic_colors[topic]
                count = counts[topic][i]
                topic_attr = topic
                html_content += f'<span style="background-color: {color};" data-topic="{topic_attr}" title="Count: {int(count)}">{char}</span>'
                print(char)
                
            else:
               
                    html_content +=  f'<span data-topic="{topic}">{char}</span>'
                   
                
                
                    
    html_content += '</pre></body></html>'

    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(html_content)

# 测试C++文件
cpp_file_path = 'C:/Users/User/Desktop/C++_topic_classification/dataset/sample/sample.cpp'
output_html_path = 'C:/Users/User/Desktop/C++_topic_classification/dataset/sample/output.html'
code, classifications, counts = classify_cpp_file(cpp_file_path)
print("test")
generate_html(code, classifications, counts, output_html_path)

print(f"Output HTML file generated at {output_html_path}")
