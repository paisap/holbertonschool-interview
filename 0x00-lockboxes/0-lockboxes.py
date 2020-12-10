#!/usr/bin/python3
""" interview """


def canUnlockAll(boxes):
    """ interview """
    lili = [0]
    leng = len(boxes)
    numberlist = {0: 0}
    for box in lili:
        for key in boxes[box]:
            if key not in numberlist and key < leng:
                numberlist[key] = 'im key'
                lili.append(key)
    return leng == len(lili)
