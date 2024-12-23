import csv

# Open the CSV file and read as dictionary
with open('data.csv','r') as file:
    reader = csv.ReaderDict(file)
    for row in reader:
        print(row)  # Each row is a dictionary


