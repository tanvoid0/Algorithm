# sh, sm, eh, em = map(int, input().split())
#
# if sh == eh and sm == em:
#     hour = 24
#     minute = 0
# elif sh == eh:
#     if sm <= em:
#         hour = 0
#         minute = em - sm
#     else:
#         hour = 23
#         minute = (60-sm)+em
# elif sh < eh:
#     hour = eh - sh
#     if sm <= em:
#         minute = em - sm
#     else:
#         minute =  (60-sm)+em
# else:
#     hour = (24-sh)+eh
#     minute =


import datetime
sh, sm, eh, em = map(int, input().split())
st = datetime.datetime(hour=sh, minute= sm)
et = datetime.datetime(hour=eh, minute=em)

print(st.hour)