Cv, Ce, Cs, Fv, Fe, Fs = map(int, input().split())

pontoC = Cv * 3 + Ce
pontoF = Fv * 3 + Fe

if pontoC > pontoF or (pontoC == pontoF and Cs > Fs):
  print("C")
elif pontoF > pontoC or (pontoC == pontoF and Fs > Cs):
  print("F")
else:
  print("=")

# if pontoC > pontoF:
#   print("C")
# elif pontoF > pontoC:
#   print("F")
# else:
#   if Cs > Fs:
#     print("C")
#   elif Fs > Cs:
#     print("F")
#   else:
#     print("=")