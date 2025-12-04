import re

def extract_functions(code):
    # Regex to match function definitions starting with void, int, or static
    func_pattern = re.compile(
        r'(?P<signature>\b(?:void|int|static)[\w\s\*]*?\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)\s*)\{',
        re.MULTILINE
    )
    matches = list(func_pattern.finditer(code))
    functions = []
    for idx, match in enumerate(matches):
        start = match.start()
        func_name = match.group(2)
        # Find the full function body (including nested braces)
        brace_count = 0
        i = match.end() - 1
        while i < len(code):
            if code[i] == '{':
                brace_count += 1
            elif code[i] == '}':
                brace_count -= 1
                if brace_count == 0:
                    end = i + 1
                    break
            i += 1
        func_code = code[start:end]
        functions.append((func_name, func_code))
    return functions

def main():
    # Read your C code sample from a file or string
    with open('halteval_pro_toy_examples.c', 'r') as f:
        code = f.read()
    functions = extract_functions(code)
    mapping = {}
    for idx, (func_name, func_code) in enumerate(functions, 1):
        id_name = f'id{idx}'
        mapping[func_name] = id_name
        with open(f'{id_name}.c', 'w') as f:
            f.write(func_code)
        print(f'{func_name} → {id_name}')
    print('\nMapping:')
    for func_name, id_name in mapping.items():
        print(f'{func_name}: {id_name}')

if __name__ == '__main__':
    main()