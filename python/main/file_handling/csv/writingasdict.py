import csv

# Data to be written
data = [
    {'Name': 'Alice', 'Age': 30, 'Department': 'HR'},
    {'Name': 'Bob', 'Age': 25, 'Department': 'IT'},
    {'Name': 'Charlie', 'Age': 28, 'Department': 'Finance'}
]

# Write data to a CSV file
with open('output_dict.csv', mode='w', newline='') as file:
    fieldnames = ['Name', 'Age', 'Department']
    writer = csv.DictWriter(file, fieldnames=fieldnames)
    writer.writeheader()  # Write column headers
    writer.writerows(data)  # Write multiple rows

print("Dictionary data written successfully!")
