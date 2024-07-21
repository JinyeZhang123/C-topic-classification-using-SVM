import os
import random

def extract_random_lines(directory_path, output_dir):
    os.makedirs(output_dir, exist_ok=True)

    # 递归遍历所有文件和文件夹
    for root, dirs, files in os.walk(directory_path):
        for filename in files:
            # 只处理 .cpp 文件
            if filename.endswith('.cpp'):
                file_path = os.path.join(root, filename)
                with open(file_path, 'r', encoding='utf-8') as file:
                    lines = file.readlines()  # 读取所有行

                # 随机选择一行
                if lines:  # 确保文件不是空的
                    random_line = random.choice(lines)
                    new_file_name = f"random_line_{filename[:-4]}.cpp"
                    new_file_path = os.path.join(output_dir, new_file_name)
                    
                    # 将随机选中的行写入新文件
                    with open(new_file_path, 'w', encoding='utf-8') as new_file:
                        new_file.write(random_line)
                    print(f"Random line stored in: {new_file_path}")

# 调用函数，传入您的代码目录和输出目录
extract_random_lines('C:/Users/User/Desktop/dataset/Project_CodeNet_C++1400', 'C:/Users/User/Desktop/dataset/other')