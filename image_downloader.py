from bs4 import BeautifulSoup # BeautifulSoup is in bs4 package 
import requests
row = []

URL = 'https://www.google.com/search?q=fire&client=firefox-b-d&sxsrf=ACYBGNTT6447rlOk3HB8zYwowxnwKBw6FA:1572377919468&source=lnms&tbm=isch&sa=X&ved=0ahUKEwj1sd6anMLlAhVKpY8KHUYeAygQ_AUIEigC&biw=1536&bih=750'
content = requests.get(URL)
soup = BeautifulSoup(content.text, 'html.parser')

row = soup.findAll('img')

for i in range(5):
	
	URL = str(row[i].attrs['src'])
	img_data = requests.get(URL).content

	with open(str(i) + 'img.jpg', 'wb') as handler:
	    handler.write(img_data)
