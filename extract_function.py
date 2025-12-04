import re

def extract_id_functions(filename):
    with open(filename, 'r') as f:
        code = f.read()

    # Regex to match functions named idN (N = number), including multiline bodies
    func_pattern = re.compile(
        r'(?:static\s+)?(?:void|int|unsigned\s+int|unsigned\s+char|struct\s+\w+\*|int\*|void\*|list_t\*|#define\s+\w+\s+\d+)?\s*'
        r'(id\d+)\s*\([^\)]*\)\s*\{(?:[^{}]|\{[^{}]*\})*\}',
        re.MULTILINE | re.DOTALL
    )

    for match in func_pattern.finditer(code):
        func_code = match.group(0)
        # Extract function name for filename
        name_match = re.search(r'\b(id\d+)\s*\(', func_code)
        if name_match:
            func_name = name_match.group(1)
            with open(f"{func_name}.c", "w") as out_file:
                out_file.write(func_code.strip() + "\n")

if __name__ == "__main__":
    extract_id_functions("transformed_source.c")