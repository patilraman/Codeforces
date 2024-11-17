#!/bin/bash

# Prompt user for the contest number
echo -n "Enter the contest number: "
read contest_number

# Check if input is empty
if [ -z "$contest_number" ]; then
    echo "Contest number cannot be empty."
    exit 1
fi

# Get today's date in YYYY-MM-DD format
today_date=$(date +"%Y-%m-%d")

# Combine prefix, contest number, and date to create the directory name
directory_name="cforce-${contest_number}-${today_date}"

# Create the directory
mkdir -p "$directory_name"

# Provide feedback to the user
echo "Directory '$directory_name' created successfully."
