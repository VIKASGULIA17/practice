import csv

# Open a file in write mode
with open('output.csv', 'w') as file:
    writer = csv.writer(file)  # Create a CSV writer object
    
    writer.writerow(['Name', 'Age', 'Department'])  # Write a single row
    
    writer.writerows([  # Write multiple rows
        ['Alice', 30, 'HR'],
        ['Bob', 25, 'IT'],
        ['Charlie', 28, 'Finance']
    ])

print("Data written successfully!")
