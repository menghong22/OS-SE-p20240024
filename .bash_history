git branch
git init
git pull
git branch 
git pull git@gitlab.com:menghong22/os_lab1.git
ls
cd lab4-challenge
ls
ls -F
awk '{print $1}' access.log | sort | uniq -c | sort -rn | head -n 1
grep "PASTE_IP_HERE" access.log | grep "403" | awk '{print $7}' | sort | uniq
echo "IP|URL|COUNT" > final_answer.txt
echo "ls -F" > commands.txt
echo "awk '{print \$1}' access.log | sort | uniq -c | sort -rn | head -n 1" >> commands.txt
echo "grep 'YOUR_IP' access.log | grep '403' | awk '{print \$7}' | sort | uniq" >> commands.txt
hostname -I
awk '{print $1}' access.log | sort | uniq -c | sort -rn | head -n 1
grep "10.9.16.112" access.log | grep "403" | awk '{print $7}' | sort | uniq
grep "10.9.16.112" access.log | grep "403" | awk '{print $7}' | sort | uniq\
grep "10.9.16.112" access.log | grep "403" | awk '{print $7}' | sort | uniq
echo "10.9.16.112|THE_URL_YOU_FOUND|6" > final_answer.txt
echo "ls -F" > commands.txt
echo "awk '{print \$1}' access.log | sort | uniq -c | sort -rn | head -n 1" >> commands.txt
echo "grep '10.9.16.112' access.log | grep '403' | awk '{print \$7}' | sort | uniq" >> commands.txt
cat final_answer.txt
cat commands.txt
grep '10.9.16.112' access.log | grep '403' | awk '{print $7}' | sort | uniq
grep "10.9.16.112" access.log | grep "403" | head -n 1
grep "10.9.16.112" access.log | grep "403" | awk '{print $6}' | sort | uniq
echo "10.9.16.112|PUT_THE_NEW_PATH_HERE|6" > final_answer.txt
echo "ls -F" > commands.txt
echo "awk '{print \$1}' access.log | sort | uniq -c | sort -rn | head -n 1" >> commands.txt
echo "grep '10.9.16.112' access.log | grep '403' | awk '{print \$6}' | sort | uniq" >> commands.txt
cat final_answer.txt
grep "10.9.16.112" access.log | grep "403" | awk '{print $6}' | sort | uniq
echo "10.9.16.112|/api/grades|6" > ~/lab4-challenge/final_answer.txt
cat << 'EOF' > ~/lab4-challenge/commands.txt
ls -F
awk '{print $1}' access.log | sort | uniq -c | sort -rn | head -n 1
grep "10.9.16.112" access.log | grep "403" | awk '{print $6}' | sort | uniq
EOF

cat final_answer.txt
cat commands.txt
ls
cat access.log 
git add .
git commit -m "task4 challenge"
git push origin master
git pull origin --rebase
git pull origin master --rebase
git pull --rebase origin master
git stash               # This hides the unstaged changes
git pull origin master --rebase
git push origin master
git stash pop           # This brings your extra changes back (optional)
cd ..
git push origin master
git add ,
ls
git pull origin master
git add .
git commit -m "push to sir server"
git push origin master
exit
