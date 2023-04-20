# https://cdn.cs50.net/2019/fall/lectures/6/src6/6/filter/
from PIL import Image, ImageFilter

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(5))
after.save("bridge-blurred.bmp")