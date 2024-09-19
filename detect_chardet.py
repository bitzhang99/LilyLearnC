# -*- coding: utf-8 -*-
# Python 3.5及以上版本的Python解释器默认使用UTF-8编码

import sys
import chardet

# 字符集检测工具
print("当前默认的字符集为【{}】".format(sys.getdefaultencoding()))


def detect_encoding(file_path):
	with open(file_path, 'rb') as f:
		result = chardet.detect(f.read())
	return result['encoding']

def read_large_text_file(file_path):
	encoding = detect_encoding(file_path)
	print(f"文件{file_path}检测到的编码是：{encoding}")

# text = 'ÎÒÒÑ¾­ÔÚ1-100ÖÐÑ¡ÔñÁËÒ»¸öÕûÊý£¬Çë²Â²â£º'

# print(f"检测到的编码是：{encoding}")
print("OK")

if __name__ == "__main__":
	input_file_path = "E:\\Python\\GitHub\\LilyLearnC\\2.0 do while.c"
	read_large_text_file(input_file_path)

	input_file_path = "E:\\Python\\GitHub\\LilyLearnC\\lily_99.c"
	read_large_text_file(input_file_path)