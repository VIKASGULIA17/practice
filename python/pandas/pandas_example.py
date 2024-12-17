import pandas as pd

# Create a simple DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie'],
    'Age': [25, 30, 35],
    'City': ['New York', 'Los Angeles', 'Chicago']
}

df = pd.DataFrame(data)

# Display the DataFrame
print("Original DataFrame:")
print(df)

# Add a new column
df['Occupation'] = ['Engineer', 'Doctor', 'Artist']

# Filter rows where Age is greater than 28
filtered_df = df[df['Age'] > 28]

# Display the filtered DataFrame
print("\nFiltered DataFrame (Age > 28):")
print(filtered_df)
