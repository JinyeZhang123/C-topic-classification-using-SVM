import os
import random
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC
from sklearn.metrics import classification_report

def load_data(directory, label):
    data = []
    for filename in os.listdir(directory):
        filepath = os.path.join(directory, filename)
        with open(filepath, 'r', encoding='utf-8') as file:
            code = file.read()
            data.append((code, label))
    return data

data_operator = load_data('C:/Users/User/Desktop/dataset/new_operator_overload', 1) 
data_virtual = load_data('C:/Users/User/Desktop/dataset/new_virtual_functions', 2)  # 虚函数的标签
data_FileIO = load_data('C:/Users/User/Desktop/dataset/new_file_io', 3)
data_inheritance = load_data('C:/Users/User/Desktop/dataset/new_Inheritance', 4) 
data_lambda = load_data('C:/Users/User/Desktop/dataset/new_lambda', 5)  
data_stl = load_data('C:/Users/User/Desktop/dataset/new_stl', 6)
data_templates = load_data('C:/Users/User/Desktop/dataset/new_templates', 7)
data_class = load_data('C:/Users/User/Desktop/dataset/new_Classes', 0)


data = data_operator + data_virtual + data_inheritance + data_FileIO + data_lambda + data_stl + data_templates + data_class  # 合并所有数据
random.shuffle(data)  

X, y = zip(*data)     

vectorizer = TfidfVectorizer()
X_tfidf = vectorizer.fit_transform(X)

# 将数据集划分为训练集和测试集
X_train, X_test, y_train, y_test = train_test_split(X_tfidf, y, test_size=0.3, random_state=42)

# 训练SVM模型
model = SVC(kernel='linear')
model.fit(X_train, y_train)

# 模型评估
predictions = model.predict(X_test)
print(classification_report(y_test, predictions, target_names=['Classes', 'operator overload', 'virtual function', 'file_io', 'Inheritance', 'lambda', 'stl', 'templates']))