src = [i for i in input()]
dst = [i for i in input()]

src_ro = int(ord(src[0])-ord('a'))+1
src_col = int(src[1])
dst_ro = int(ord(dst[0])-ord('a'))+1
dst_col = int(dst[1])

# print(src_ro, src_col, dst_ro, dst_col)

if src_ro <= dst_ro: 
    vertical_orientation = "R"
else: 
    vertical_orientation = "L"

if src_col <= dst_col: 
    horizontal_orientation = "U"
else: 
    horizontal_orientation = "D"

vertical_distance = abs(src_ro-dst_ro)
horizontal_distance = abs(src_col-dst_col)

if horizontal_distance < vertical_distance:
    print(vertical_distance)
    for i in range(horizontal_distance): 
        print(vertical_orientation+horizontal_orientation)
    for i in range(vertical_distance-horizontal_distance): 
        print(vertical_orientation)
else:
    print(horizontal_distance)
    for i in range(vertical_distance): 
        print(vertical_orientation+horizontal_orientation)
    for i in range(horizontal_distance-vertical_distance): 
        print(horizontal_orientation)
