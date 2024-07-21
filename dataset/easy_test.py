import joblib
import os

# 加载模型、矢量化器和标签编码器
model_dir = 'C:/Users/User/Desktop/dataset/models'
model_path = os.path.join(model_dir, 'multi_label_svm_model.pkl')
vectorizer_path = os.path.join(model_dir, 'vectorizer.pkl')
mlb_path = os.path.join(model_dir, 'mlb.pkl')

model = joblib.load(model_path)
vectorizer = joblib.load(vectorizer_path)
mlb = joblib.load(mlb_path)

# 获取特定标签的索引
target_label = 'operator overload'
label_index = list(mlb.classes_).index(target_label)

# 待分类的代码片段
code_snippet = """
<fstream>

"""

# 处理代码片段
def classify_code_snippet(code_snippet, label_index):
    # 将代码片段转换为TF-IDF特征向量
    X_new_tfidf = vectorizer.transform([code_snippet])

    # 使用加载的多标签模型进行分类
    predictions = model.predict(X_new_tfidf)
    
    # 获取特定标签分类器的预测结果
    label_prediction = predictions[:, label_index]
    predicted_label = target_label if label_prediction[0] else f'not {target_label}'

    return predicted_label

# 对代码片段进行分类并输出结果
predicted_label = classify_code_snippet(code_snippet, label_index)
print(f"Predicted label for the code snippet: {predicted_label}")
