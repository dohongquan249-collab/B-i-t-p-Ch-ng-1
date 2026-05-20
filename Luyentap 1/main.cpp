Bai 1

tuoi = 19

diem_so = 10

ten = "Đỗ Hồng Quân"

print("Tuổi (Integer):", tuoi)
print("Điểm số (Float):", diem_so)
print("Tên (String):", ten)

Bai 2

PI = 3.14
r = 5

chu_vi = 2 * PI * r

print("Chu vi hình tròn có bán kính r = 5 là:", chu_vi)

Bai 3

so_thu_nhat = int(input("nhập số nguyên thứ nhất: "))
so_thu_hai = int(input("nhập số nguyên thứ hai: "))

tong = so_thu_nhat + so_thu_hai
hieu = so_thu_hai - so_thu_nhat
tich = so_thu_nhat * so_thu_hai

if so_thu_nhat !=0:
    thuong = so_thu_nhat / so_thu_hai
else:
    thuong = "không thể chia cho số 0"
print("\n---Kết quả các phép toán---")
print(f"Tổng của hai số: {tong}")
print(f"hiệu của hai số: {hieu}")
print(f"tich của hai số: {tich}")
print(f"Thương của hai số: {thuong}")

Bai 4

def sum_two_numbers(a, b):
    return a + b

ket_qua = sum_two_numbers(5, 10)

print("Tổng của 2 số là:", ket_qua)

Bai 5

name = "Đỗ Hồng Quân"
age = 19
average_score = 10

age_next = age + 1
doubled_score = average_score * 2

print("===THÔNG TIN CÁ NHÂN VÀ KIỂU DỮ LIỆU")

print(f"Tên: {name}")
print(f"-> Kiểu dữ liệu của 'name' : {type(name)}\n")

print(f"Tuổi hiện tại: {age}")
print(f"-> Kiểu dữ liệu của 'age' : {type(age)}\n")

print(f"Điểm trung bình: {average_score}")
print(f"-> Kiểu dữ liệu của 'average_score' : {type(average_score)}\n")

print("---Kết quả sau khi sử lý---")
print(f"Tuổi sau 1 năm: {age_next}")
print(f"-> Kiểu dữ liệu của 'age_next' : {type(age_next)}\n")

print(f"Điểm sau khi nhân đôi: {doubled_score}")
print(f"-> Kiểu dữ liệu của 'doubled_score' : {type(doubled_score)}\n")
