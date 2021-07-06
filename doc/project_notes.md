## Signals ?
In a UNIX based system, signals are notifications/software interrupt that indicates to a program that something has happened. In return, the program will perform an action, such as terminating a process, stop the process, continue a stop processed.

## Listing signals
Signals can be listed by doing a 'kill -l'.
Here are some of the most common signals
Name    Number	Description
SIGHUP	1		Hang up detected on controlling terminal or death of controlling process
SIGINT	2		Issued if the user sends an interrupt signal (Ctrl + C)
SIGQUIT	3		Issued if the user sends a quit signal (Ctrl + D)
SIGFPE	8		Issued if an illegal mathematical operation is attempted
SIGKILL	9		If a process gets this signal it must quit immediately and will not perform any clean-up operations
SIGALRM	14		Alarm clock signal (used for timers)
SIGTERM	15		Software termination signal (sent by kill by default)

## Sending a signal
There are multiple ways to deliver a signal to a program:
* ctrl-c is used to interrupt programs
* kill -{signal} {pid of the process). Ex: kill -SIGINT 1234 or kill -2 1234

# Unicode ?
Unicode enable systems to write characters beyond the 256 characters of the extended-ASCII table such as kanji (Jap), hanzi (china), hanja (Kor), germanspecial char, emoji...
Unicode is a standard  that enables text exchanges at an international level by mapping each character of a writing system to a code. This key/name link is unified.
Exemples of unicode code :
* U+0041 is 'A'
* U+00DF is 'ß'
* U+00F1 is 'ñ'
* U+30f0 is 'ヰ'
Unicode code points can be encoded on 1,2,3 or 4 bytes depending on which range the code belongs. Moreover, these bytes can follow different encoding norms : UTF-8, UCS-2, UTF-16, UTF-32 with distinct memory efficiency.

## Useful links
<https://www.cprogramming.com/tutorial/unicode.html>
