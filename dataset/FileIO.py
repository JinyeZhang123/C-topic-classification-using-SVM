import os
import re

def find_file_io_functions(directory_path, output_dir):
    os.makedirs(output_dir, exist_ok=True)

    # 正则表达式，用于匹配文件I/O操作
    io_patterns = [
        r"\bifstream\b", r"\bofstream\b", r"\bfstream\b", r"\bstd::filesystem\b"
    ]

    # 正则表达式，用于匹配C++中的函数定义
    function_pattern = re.compile(r"(\w+\s+\w+\s*\(.*?\)\s*\{[\s\S]+?\})")

    # 递归遍历所有文件和文件夹
    for root, dirs, files in os.walk(directory_path):
        for filename in files:
            # 只处理 .cpp 文件
            if filename.endswith('.cpp'):
                file_path = os.path.join(root, filename)
                try:
                    with open(file_path, 'r', encoding='utf-8') as file:  # 以utf-8编码读取文件
                        code = file.read()
                except UnicodeDecodeError:
                    print(f"无法读取 {file_path}，因为编码错误。")
                    continue

                # 查找包含文件I/O操作的函数
                functions = function_pattern.finditer(code)
                for function in functions:
                    function_code = function.group(1)
                    if any(re.search(pattern, function_code) for pattern in io_patterns):
                        # 只写入匹配的函数代码
                        new_file_name = f"file_io_function_{filename[:-4]}_{function.start()}.cpp"
                        new_file_path = os.path.join(output_dir, new_file_name)
                        with open(new_file_path, 'w', encoding='utf-8') as new_file:  # 写文件也指定 utf-8 编码
                            new_file.write(function_code)
                        print(f"文件I/O函数已存储在: {new_file_path}")

# 调用函数，传入你的代码目录和输出目录
find_file_io_functions('C:/Users/User/Desktop/dataset/Project_CodeNet_C++1400', 'C:/Users/User/Desktop/dataset/file_io')