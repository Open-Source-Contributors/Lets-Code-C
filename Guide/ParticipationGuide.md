### Participation Guide
Follow these steps to submit your solution.

### 1. Fork the Repository
- Visit the main bootcamp repository on GitHub.
- Click on the "Fork" button to create your fork.
  
### 2. Clone the Repository
- Clone your forked repository to your local machine:
  
```bash
git clone https://github.com/your-username/Lets-Code-C.git
```

- Replace your-username with your GitHub username.
  
### 3. Setup Repository in Local System
- Move into the cloned repository:
  
```bash
cd Lets-Code-C
```

### 4. Create a Branch
- Create a new branch for your work:
  
```bash
git checkout -b your-branch-name
```

- Replace your-branch-name with a descriptive name for your branch.
  
### 5. Set Upstream of Branch
- Set up the upstream remote to the main bootcamp repository:
  
```bash
git remote add upstream https://github.com/original-username/bootcamp-repo.git
```

- Replace original-username with the username of the original repository.
  
6. Create a Directory with Your Name
- Create a directory with your name in the format FirstnameLastname:
  
```bash
mkdir FirstnameLastname
```

- Replace FirstnameLastname with your actual name.
  
### 7. Create a Subdirectory with Day Number
- Inside your directory, create a subdirectory for each day using the format DayX, where X is the day number:
  
```bash
cd FirstnameLastname
mkdir Day1
```

- Replace Day1 with the appropriate day number.

### 8. Create Solution of Problem One
- Inside the day's directory, create a C solution file for the first problem using the format 01.c:
  
```bash
cd Day1
touch 01.c
```

### 9. Write Your Code Solution
- Open the 01.c file in your preferred text editor.
- Write your C code solution.

### 10. Stage and Commit Changes
- Stage your changes:

```bash
git add .
```

- Commit your changes:

```bash
git commit -m "Solve problem 1 for Day 1"
```

### 11. Create a Pull Request
- Visit your fork on GitHub.
- Switch to your branch using the branch dropdown.
- Click on "New Pull Request."
- Ensure the base repository is the main bootcamp repository and the base branch is "main."
- Write a descriptive title and comment.
- Click on "Create Pull Request."

### Steps to Update Repo with Recent Changes and Other Related Things

- Fetch Changes from Upstream:

```bash
git fetch upstream
```

- Merge Changes from Upstream into Your Local Branch:

```bash
git merge upstream/main
```

- Push Changes to Your Fork on GitHub:
```bash
git push origin your-branch-name
```

We assume you to follow the above guide and stay consistent with your submissions.

Happy Coding!
