import os
import re

def extract_template_functions(content):
    # 正则表达式匹配C++模板函数
    template_function_pattern = re.compile(r'template\s*<[^>]+>\s*[^;{]+\s*\{[^}]*\}', re.DOTALL)
    matches = template_function_pattern.findall(content)
    return matches

def process_file(file_path, output_dir):
    with open(file_path, 'r', encoding='utf-8') as file:
        content = file.read()
        
    template_functions = extract_template_functions(content)
    
    if template_functions:
        base_filename = os.path.basename(file_path)
        base_filename = os.path.splitext(base_filename)[0]
        for i, function in enumerate(template_functions):
            output_file_path = os.path.join(output_dir, f"{base_filename}_template_{i+1}.cpp")
            with open(output_file_path, 'w', encoding='utf-8') as output_file:
                output_file.write(function)
            print(f"Extracted function saved to {output_file_path}")

def process_directory(input_dir, output_dir):
    os.makedirs(output_dir, exist_ok=True)
    for root, dirs, files in os.walk(input_dir):
        for file in files:
            if file.endswith('.cpp'):
                file_path = os.path.join(root, file)
                process_file(file_path, output_dir)

if __name__ == "__main__":
    input_directory = 'C:/Users/User/Desktop/dataset/Project_CodeNet_C++1400'
    output_directory = 'C:/Users/User/Desktop/dataset/Templates'
    
    process_directory(input_directory, output_directory)