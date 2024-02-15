# Participant Guide: Submitting Your Solution

Follow these steps to successfully submit your solution:

## Step 1: Fork the Repository

1. Click on the "Fork" button at the top right of the bootcamp repository page on GitHub.

## Step 2: Clone Your Forked Repository

2. Open your terminal or Git Bash.

```bash
git clone <your-forked-repo-link>
cd <repository-name>
```
Replace <your-forked-repo-link> with the link to your forked repository and <repository-name> with the name of your cloned repository.

## Step 3: Create a Branch
Create a branch using your name as its identifier.
```bash
git checkout -b <your-name-branch>
```
## Step 4: Create and Navigate to Your Directory.
```bash
mkdir <FirstnameLastname>
cd <repository-name>
```
## Step 5: Create a Subdirectory for the Day
Inside the repository, create a subdirectory for the specific day using the following command. Use a naming convention such as Day1.
```bash
mkdir Day1
cd Day1
```
## Step 6: Create a Source File
In the day's subdirectory, create a source file for the first problem of the day. For example, for Day 1, create a file named 01.c. Ensure that every file name starts with one trailing zero.
```bash
code 01.c
```
## Step 7: Write Your Solution Code
Open the source file using your preferred text editor or IDE and write your solution code.
## Step 8: Stage and Commit Your Solution
Stage your changes and commit them with a descriptive message.
```bash
git add .
git commit -m "Your commit message"
```
## Step 9: Push Changes to Your Forked Repository
Push your changes to your forked repository.
```bash
git push origin <your-name-branch>
```
## Optional Steps: Update Your Forked Repository
If the original repository has been updated, you may want to pull those changes into your forked repository.

Fetch the changes from the original repository.
```bash
git fetch upstream
```
Merge the changes into your local repository.
```bash
git merge upstream/main
```
Push the changes to your forked repository.
```bash
git push origin main
```
That's it! Your solution is now submitted. Create a pull request on GitHub to notify the bootcamp organizers of your submission.

Happy coding! 🚀
