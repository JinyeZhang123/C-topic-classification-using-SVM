import os

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:
        return file.read()

def split_into_chunks(content, chunk_size=100):
    chunks = [content[i:i+chunk_size] for i in range(0, len(content), chunk_size)]
    # 如果最后一个块的长度不足 chunk_size，则用空格补齐
    if len(chunks[-1]) < chunk_size:
        chunks[-1] += ' ' * (chunk_size - len(chunks[-1]))
    return chunks

def save_chunks(chunks, output_dir, base_filename):
    os.makedirs(output_dir, exist_ok=True)
    for i, chunk in enumerate(chunks):
        output_file_path = os.path.join(output_dir, f"{base_filename}_part_{i+1}.cpp")
        with open(output_file_path, 'w', encoding='utf-8') as output_file:
            output_file.write(chunk)

def process_files_in_directory(input_dir, output_dir):
    for root, _, files in os.walk(input_dir):
        for file in files:
            if file.endswith('.cpp'):
                file_path = os.path.join(root, file)
                content = read_file(file_path)
                chunks = split_into_chunks(content, chunk_size=100)
                relative_path = os.path.relpath(root, input_dir)
                output_subdir = os.path.join(output_dir, relative_path)
                save_chunks(chunks, output_subdir, os.path.splitext(file)[0])

if __name__ == "__main__":
    input_dir = 'C:/Users/User/Desktop/dataset/virtual_functions'
    output_dir = 'C:/Users/User/Desktop/dataset/new_virtual_functions'
    process_files_in_directory(input_dir, output_dir)
