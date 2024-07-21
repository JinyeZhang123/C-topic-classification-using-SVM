import os
import re

def find_operator_overloads(directory_path, output_dir):
    os.makedirs(output_dir, exist_ok=True)

    # 递归遍历所有文件和文件夹
    for root, dirs, files in os.walk(directory_path):
        for filename in files:
            # 只处理 .cpp 文件
            if filename.endswith('.cpp'):
                file_path = os.path.join(root, filename)
                try:
                    with open(file_path, 'r', encoding='utf-8') as file:  # 指定以 utf-8 编码读取文件
                        code = file.read()
                except UnicodeDecodeError:
                    print(f"Could not read {file_path} due to encoding error.")
                    continue

                # 正则表达式匹配包含 "operator" 的函数
                pattern = r"(\w+\s+operator\s*[^(\s]+\(.*?\)\s*\{[\s\S]+?\})"
                matches = re.finditer(pattern, code)

                # 为每个匹配的函数写入新文件
                for i, match in enumerate(matches):
                    function_code = match.group(1)
                    new_file_name = f"operator_function_{filename[:-4]}_{i+1}.cpp"
                    new_file_path = os.path.join(output_dir, new_file_name)
                    with open(new_file_path, 'w', encoding='utf-8') as new_file:  # 写文件也指定 utf-8 编码
                        new_file.write(function_code)
                    print(f"Function stored in: {new_file_path}")

# 调用函数，传入您的代码目录和输出目录
find_operator_overloads('C:/Users/User/Desktop/dataset/Project_CodeNet_C++1400', 'C:/Users/User/Desktop/dataset/operator_overload')