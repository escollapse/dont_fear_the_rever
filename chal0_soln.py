#!/usr/bin/python3

ob_flag = b'}jrh\x7fj`z\x2a\x2e\x12\x14\x1c'

key = 0x02
keylist = [0x0] * 42
for i in range(42):
    keylist[i] = key + i

offset = [2,3,5,7,11,13,17,19,23,29,31,37,41]

flag = ""

for i in range(13):
    flag += chr(ob_flag[i] ^ keylist[offset[i]])
print(flag)
