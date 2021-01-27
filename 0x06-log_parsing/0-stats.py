#!/usr/bin/python3
""" log parsing """
import sys


status = {
    200: 0,
    301: 0,
    400: 0,
    401: 0,
    403: 0,
    404: 0,
    405: 0,
    500: 0
}
contador = 0
total_size = 0
try:
    for line in sys.stdin:
        contador += 1
        x = line.split()
        total_size += int(x[8])
        for i in status:
            if int(x[7]) == i:
                status[i] += 1
        if contador == 10:
            contador = 0
            print("File size: {}".format(total_size))
            for key, value in sorted(status.items()):
                if value != 0:
                    print("{}: {}".format(key, value))
finally:
    print("File size: {}".format(total_size))
    for key, value in sorted(status.items()):
        if value != 0:
            print("{}: {}".format(key, value))
