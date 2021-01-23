# Import all required functions from the corresponding packes:
#----------------------------------------------------------------------------------------
from openpyxl import load_workbook
from os import system

system("cls") # Clear the command window, if not already empty


# Initialize access variables to the *.xlsx file:
#----------------------------------------------------------------------------------------
try:
    book = load_workbook('Vorlage_Telefonbuch.xlsx')
    
except Exception as e:
    print(e); print("")
    print("Bitte drücken Sie eine beliebige Taste, um die Anwendung zu schließen...")
    system("pause >nul")


sheet = book.active

numContacts = sheet.max_row-1


# Check the number of supplied contacts in the *.xlsx and depending on the number,
# generate a txt or tell the user, that there was no contact supplied.
#----------------------------------------------------------------------------------------
if numContacts > 1:
    print("Es wurden insgesamt " + str(numContacts) + " Kontakte erkannt.\n")
    f = open("Telefonbuch.txt", mode='w', encoding='utf-8')

elif numContacts == 0:
    print("Die Excel-Liste \"Vorlage_Telefonbuch.xlsx\" beinhaltet keine Kontakte.\n")

    print("Bitte drücken Sie eine beliebige Taste, um die Anwendung zu schließen...")
    system("pause >nul")
    exit()

else:
    print("Es wurde " + str(numContacts) + " Kontakt erkannt.\n")
    f = open("Telefonbuch.txt", mode='w', encoding='utf-8')


# Copy and write the data from the *.xlsx to a *.txt file for any cell of a row:
#----------------------------------------------------------------------------------------
counter = 0
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


# Print out the finish message::
#----------------------------------------------------------------------------------------
print("Excel-Liste wurde erfolgreich zu \"Telefonbuch.txt\" im UTF-8 Format konvertiert!")

print("Sie können \"Telefonbuch.txt\" über die Benutzeroberfläche des Speedports \"www.speedport.ip\" importieren. \n")

print("Bitte drücken Sie eine beliebige Taste, um die Anwendung zu schließen...")

system("pause >nul") # ">nul" suppresses the default message by the system based pause function