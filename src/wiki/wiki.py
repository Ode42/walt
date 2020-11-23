import sys
import json
from search.search import *


def main(arg, lang):
    wiki(arg, lang)


if __name__ == "__main__":
    with open("./../../env.json") as f:
        env = json.load(f)
    main(str(sys.argv[1]), env["lang"])
