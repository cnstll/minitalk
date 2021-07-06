# Minitalk
## Presentation
* The project aims at creating a communication program in the form of a client and server.
* The server must be launched first, and after being launched it must display its PID.
* The client will take as parameters:
	◦ The server PID.
	◦ The string that should be sent.
* The client must communicate the string passed as a parameter to the server. Once
the string has been received, the server must display it.
* Communication between your programs should ONLY be done using UNIX signals.
* The server must be able to display the string pretty quickly. By quickly we mean that if you think it is too long, then it is probably too long (hint: 1 second for 100 characters is COLOSSAL)
* Your server should be able to receive strings from several clients in a row, without needing to be restarted.
* You can only use the two signals SIGUSR1 and SIGUSR2.

Allowed functions for the project:
◦ write
◦ signal
◦ sigemptyset
◦ sigaddset
◦ sigaction
◦ kill
◦ getpid
◦ malloc
◦ free
◦ pause
◦ sleep
◦ usleep
◦ exit

## String for testing

* 100 ascii characters
"Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live."

* 500 ascii characters
"One morning, when Gregor Samsa woke from troubled dreams, he found himself transformed in his bed into a horrible vermin. He lay on his armour-like back, and if he lifted his head a little he could see his brown belly, slightly domed and divided by arches into stiff sections. The bedding was hardly able to cover it and seemed ready to slide off any moment. His many legs, pitifully thin compared with the size of the rest of him, waved about helplessly as he looked. What s happened to me? he tho"

* 1000 ascii characters
"But I must explain to you how all this mistaken idea of denouncing pleasure and praising pain was born and I will give you a complete account of the system, and expound the actual teachings of the great explorer of the truth, the master-builder of human happiness. No one rejects, dislikes, or avoids pleasure itself, because it is pleasure, but because those who do not know how to pursue pleasure rationally encounter consequences that are extremely painful. Nor again is there anyone who loves or pursues or desires to obtain pain of itself, because it is pain, but because occasionally circumstances occur in which toil and pain can procure him some great pleasure. To take a trivial example, which of us ever undertakes laborious physical exercise, except to obtain some advantage from it? But who has any right to find fault with a man who chooses to enjoy a pleasure that has no annoying consequences, or one who avoids a pain that produces no resultant pleasure? On the other hand, we denounc"

* Unicode characters
グ퀂ဤ扟⇶⏪⛔⠳
