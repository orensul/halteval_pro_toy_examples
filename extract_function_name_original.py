import re

def extract_function_names(code):
    # Matches function definitions (void, int, static void, etc.)
    pattern = r'(?:static\s+)?(?:void|int)\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^;{]*\)\s*\{'
    return re.findall(pattern, code)

if __name__ == "__main__":
    # Paste your C code as a string below
    with open("halteval_pro_toy_examples.c", "r") as f:
        code = f.read()
    names = extract_function_names(code)
    for idx, name in enumerate(names, 1):
        print(f"id{idx}: {name}")