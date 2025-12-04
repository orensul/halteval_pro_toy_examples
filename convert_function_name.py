import re

def transform_code(source_code):
    # Remove all // comments
    source_code = re.sub(r'//.*', '', source_code)
    # Remove all /* ... */ comments (multiline)
    source_code = re.sub(r'/\*.*?\*/', '', source_code, flags=re.DOTALL)

    # Find all function definitions
    func_pattern = re.compile(r'(\w[\w\s\*]+)\s+(\w+)\s*\(([^)]*)\)\s*\{')
    functions = func_pattern.findall(source_code)
    func_names = [f[1] for f in functions]

    # Map function names to idN
    func_map = {name: f'id{i+1}' for i, name in enumerate(func_names)}

    # Replace function definitions
    def replace_func_def(match):
        ret_type, name, args = match.groups()
        return f'{ret_type} {func_map[name]}({args})' + '{'
    source_code = func_pattern.sub(replace_func_def, source_code)

    # Replace function calls (simple version, may need improvement for edge cases)
    for orig, new in func_map.items():
        # Replace calls: orig_name(
        source_code = re.sub(r'\b' + re.escape(orig) + r'\s*\(', new + '(', source_code)

    return source_code

# Example usage:
with open('halteval_pro_toy_examples.c', 'r') as f:
    code = f.read()

transformed_code = transform_code(code)
# Output transformed code
with open('transformed_source.c', 'w') as f:
    f.write(transformed_code)
print("Transformation complete. See  transformed_source.c")