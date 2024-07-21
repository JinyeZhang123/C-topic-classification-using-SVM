import os

def delete_files_with_part2(directory):
    # 遍历目录中的所有文件
    for root, _, files in os.walk(directory):
        for file in files:
            # 检查文件名是否包含 'part2'
            if 'template_' in file:
                file_path = os.path.join(root, file)
                try:
                    # 删除文件
                    os.remove(file_path)
                    print(f"Deleted: {file_path}")
                except Exception as e:
                    print(f"Failed to delete {file_path}: {e}")

if __name__ == "__main__":
    # 指定目录
    target_directory = 'C:/Users/User/Desktop/dataset'
    
    # 删除包含 'part2' 的文件
    delete_files_with_part2(target_directory)