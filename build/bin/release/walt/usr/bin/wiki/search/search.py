from selenium import webdriver
from selenium.webdriver.chrome.options import Options
import html2text

PATH = "./chromedriver"
options = Options()

options.add_argument('--headless')
options.add_argument('--disable-gpu')

driver = webdriver.Chrome(PATH, options=options)


def write_result(result):
    print("Writing...")
    f = open("./result", "w")
    f.write(result)
    f.close()


def wiki(keyword, language):

    url = f"https://{language}.wikipedia.org/wiki/{keyword}"
    print(
        f"Start wiki with keyword {keyword} in language {language} in url {url}")
    driver.get(url)
    body = driver.find_element_by_xpath("/html/body")
    body_html = body.get_attribute("innerHTML")
    body_text = html2text.html2text(body_html)
    write_result(body_text)
