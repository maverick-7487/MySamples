
To create a new branch

git checkout -b dev

To switch to another branch

git checkout -b dev

To sync with a remote repository

<remote_name>=origin
<remote_HTTPS_URL>=https://github.com/maverick-7487/MySamples.git
git remote add origin <remote_HTTPS_URL>

To see remotes
git remote -v

To sync a branch with a  remote branch
git branch --set-upstream-to=origin/master master
