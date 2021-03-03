step 1: it will ask you to define the vlan range. enter a vlan range
according to the senario (number of ports on the switch). or just define a 20 vlan range
it will be fine.

step 2: check on the switch how many fast eth ports are there, if there are no
fe ports, only ge ports, then enter 0, otherwise enter the number of fe ports on the
switch.

step 3: be carefull here. if its a 28 port switch, 2 ports per vlan would be fine,
if its a 48 port switch, 3 ports per vlan will be fine. if you want to assign
2 ports per vlan then you have to increase the vlan range to say about 30.

step 4: just type 1 or 2 here, check on the switch what sequence number
is being used (0/1 or 0/0/1 etc).

step 5: look on the switch and enter the first fe port seuence number

step 6: type 0 here. if assigning ports/vlan for gig ports, restart the program
and type 0 when asked how many fe ports are there. the procedure is the
same for gig ports.