import joblib

# 加载模型、矢量化器和标签编码器
model = joblib.load('multi_label_svm_model.pkl')
vectorizer = joblib.load('vectorizer.pkl')
mlb = joblib.load('mlb.pkl')

def predict_code_snippets(code_snippets):
    # 将新代码片段转换为TF-IDF特征向量
    X_new_tfidf = vectorizer.transform(code_snippets)

    # 使用加载的模型进行分类
    predictions = model.predict(X_new_tfidf)
    predicted_labels = mlb.inverse_transform(predictions)

    # 打印分类结果
    for code, prediction in zip(code_snippets, predicted_labels):
        print(f"Code: {code}\nPredicted Topics: {prediction}\n")

# 测试新的代码片段
new_code_snippets = [
    "int operator+(const Complex& other) { return this->real + other.real; }",
    "class Base { virtual void display() {} };",
    "std::ifstream file('example.txt');"
]

predict_code_snippets(new_code_snippets)