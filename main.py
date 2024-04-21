def IsLeapYear(Y):
    if y % 4 == 0 and y % 400 == 0 or y % 4 == 0 and y % 100 !=0:
        return True
    else:
        return False
def MonthDays(k,m,y):
    kabisa  = IsLeapYear(y)    
    if 1 <= m <= 12:
        if m == 2:
            return 1 <= k <= 28 + kabisa
        elif m == 4 or m == 6 or m == 9 or m == 11:
            return 1 <= k <= 30
        else:
            return 1 <= k <=31
    else:
        return False    
def NextDate(dd, mm, yy):
    kabisa  = IsLeapYear(yy)
    sana = MonthDays(dd,mm,yy)
    if sana:
        dd += 1
        if mm == 2 and dd > 28+kabisa:
            mm += 1
            dd %= (28+kabisa)
        elif (mm == 4 or mm == 6 or mm == 9 or mm == 11) and dd > 30:
            mm += 1
            dd %= 30
        elif dd > 31:
            if mm == 12:
                mm = 1
                yy += 1
            else:
                mm +=1 
            dd %= 31
        return "Next date is : " + str(dd) + ":" + str(mm) + ":" + str(yy)      
    else:
        return "Incorrect date!!\n"
d = int(input("Day = "))
m = int(input("Month  = "))
y = int(input("Year = "))
print(NextDate(d, m, y))

a
a = 7;
b = 4;
x = a + b;







