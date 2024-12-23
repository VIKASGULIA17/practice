import csv

# Open the CSV file and read its content
with open('data.csv', 'r') as file:
    reader = csv.reader(file)  # Create a CSV reader object
    print(type(reader))
    for row in reader:
        print(row)  # Print each row as a list
