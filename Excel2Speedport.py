from openpyxl import load_workbook
from os import system

system("cls")

book = load_workbook('Speedport_Telefonbuch.xlsx')

sheet = book.active

f = open("Telefonbuch.txt","w", encoding='utf-8')

counter = 0

print("Es wurden insgesamt "+str(sheet.max_row-1)+" Kontakte erkannt.\n")

for row in sheet.iter_rows(min_row=1, max_col=10, max_row=sheet.max_row):

    for cell in row:
        counter += 1

        if str(cell.value) == "None":
            f.write("\"\"")
        else:
            f.write("\""+str(cell.value) + "\"")

        if counter < 10:
            f.write(",")
        elif counter == 10:
            f.write("\n")
            counter = 0

f.close()

print("Excel-Liste wurde erfolgreich zu Telefonbuch.txt im UTF-8 Format konvertiert!")
print("Sie können die Kontakte über die Benutzeroberfläche des Speedports \"www.speedport.ip\" importieren. \n")
system("pause")