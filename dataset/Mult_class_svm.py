import joblib
import os
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.model_selection import train_test_split
from sklearn.multioutput import MultiOutputClassifier
from sklearn.svm import SVC
from sklearn.preprocessing import MultiLabelBinarizer
from sklearn.metrics import classification_report
import random

def load_data(directory, labels):
    data = []
    for filename in os.listdir(directory):
        filepath = os.path.join(directory, filename)
        with open(filepath, 'r', encoding='utf-8') as file:
            code = file.read()
            data.append((code, labels))
    return data

# 多标签数据示例
data_operator = load_data('C:/Users/User/Desktop/dataset/new_operator_overload', ['operator overload'])
data_virtual = load_data('C:/Users/User/Desktop/dataset/virtual_functions', ['virtual function'])
data_FileIO = load_data('C:/Users/User/Desktop/dataset/new_file_io', ['file_io'])
data_inheritance = load_data('C:/Users/User/Desktop/dataset/new_Inheritance', ['Inheritance'])
data_lambda = load_data('C:/Users/User/Desktop/dataset/new_lambda', ['lambda'])
data_stl = load_data('C:/Users/User/Desktop/dataset/new_stl', ['stl'])
data_templates = load_data('C:/Users/User/Desktop/dataset/Templates', ['templates'])
data_class = load_data('C:/Users/User/Desktop/dataset/new_Classes', ['Classes'])

# 处理多标签数据
data = data_operator + data_virtual + data_inheritance + data_FileIO + data_lambda + data_stl + data_templates + data_class
random.shuffle(data)

X, y = zip(*data)

# 使用 MultiLabelBinarizer 将标签转换为多标签二进制矩阵
mlb = MultiLabelBinarizer()
y_binarized = mlb.fit_transform(y)

vectorizer = TfidfVectorizer(analyzer='char', ngram_range=(1, 5))
X_tfidf = vectorizer.fit_transform(X)

# 将数据集划分为训练集和测试集
X_train, X_test, y_train, y_test = train_test_split(X_tfidf, y_binarized, test_size=0.3, random_state=42)

# 训练多标签分类模型
base_model = SVC(kernel='linear')
model = MultiOutputClassifier(base_model)
model.fit(X_train, y_train)

# 模型评估
predictions = model.predict(X_test)
print(classification_report(y_test, predictions, target_names=mlb.classes_))

# 保存模型、矢量化器和标签编码器
model_dir = 'C:/Users/User/Desktop/dataset/models'
os.makedirs(model_dir, exist_ok=True)

joblib.dump(model, os.path.join(model_dir, 'multi_label_svm_model.pkl'))
joblib.dump(vectorizer, os.path.join(model_dir, 'vectorizer.pkl'))
joblib.dump(mlb, os.path.join(model_dir, 'mlb.pkl'))

print("Model and related objects have been saved.")