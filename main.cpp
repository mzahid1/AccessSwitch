// This program will help in configuring Access Switches a lot more easily and efficiently; only by asking some general questions
// an Engineer asks himself while configuring a particular Access Switch.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char Hostname[25];
    char ManagementVLAN_IP[20];
    char ManagementVLAN_Mask[20];
    char Default_Route[15];
    char DUMMY;
    int FastEthernet_ports=0;
    int START_RANGE=0;
    int END_RANGE=0;
    int GigEthernet_ports=0;
    int START_RANGE_GE=0;
    int END_RANGE_GE=0;

    cout << "Hostname: ";
    cin >> Hostname;

    cout << "Management IP and Mask: ";
    cin >> ManagementVLAN_IP >> ManagementVLAN_Mask;

    cout << "Default Route: ";
    cin >> Default_Route;

    cout << "Enter VLAN Range: ";
    cin >> START_RANGE >> DUMMY >> END_RANGE;

    START_RANGE_GE = START_RANGE;
    END_RANGE_GE = END_RANGE;

    cout << "Number of FastEthernet ports: ";
    cin >> FastEthernet_ports;

    // For Fast Ethernet Ports
    int VLANS_PerPort;
    int SEQ_FA;
    int NumberOfTrunkFE;
    int a,b;
    int x,y,z;
    int FATrunk1;
    int FATrunk21, FATrunk22;
    int FATrunk31, FATrunk32, FATrunk33;
    int FATrunk41, FATrunk42, FATrunk43, FATrunk44;
    int FATrunk51, FATrunk52, FATrunk53, FATrunk54, FATrunk55;
    int FATrunk61, FATrunk62, FATrunk63, FATrunk64, FATrunk65, FATrunk66;
    int VLAN;

    // For Gig Ethernet Ports
    int VLANS_PerPort_GE;
    int SEQ_GE;
    int NumberOfTrunkGE;
    int c,d;
    int u,v,w;
    int GETrunk1;
    int GETrunk21, GETrunk22;
    int GETrunk31, GETrunk32, GETrunk33;
    int GETrunk41, GETrunk42, GETrunk43, GETrunk44;
    int GETrunk51, GETrunk52, GETrunk53, GETrunk54, GETrunk55;
    int GETrunk61, GETrunk62, GETrunk63, GETrunk64, GETrunk65, GETrunk66;
    int VLAN_GE;

    if (FastEthernet_ports != 0)
    {
        cout << "How many VLANS per port ( 0, 1, 2, or 3 ): ";
        cin >> VLANS_PerPort;

        cout << "What type of sequence number is being used (1: 0/1 or 2: 1/0/1): ";
        cin >> SEQ_FA;

        cout << "How many FastEthernet ports should be trunk ports: ";
        cin >> NumberOfTrunkFE;
    }

    if (SEQ_FA == 1)
    {
        cout << "Type the sequence number of the first FastEthernet port: ";
        cin >> a >> DUMMY >> b;
    }
    else if (SEQ_FA == 2)
    {
        cout << "Type the sequence number of the first FastEthernet port: ";
        cin >> x >> DUMMY >> y >> DUMMY >> z;
    }

    if (NumberOfTrunkFE != 0)
    {
        if (NumberOfTrunkFE == 1 && SEQ_FA == 1)
        {
            cout << "Type the FastEthernet Trunk port number: ";
            cin >> FATrunk1;
        }
        if (NumberOfTrunkFE == 2 && SEQ_FA == 1)
        {
            cout << "Type the FastEthernet Trunk port numbers: ";
            cin >> FATrunk21 >> FATrunk22;
        }
        if (NumberOfTrunkFE == 3 && SEQ_FA == 1)
        {
            cout << "Type the FastEthernet Trunk port numbers: ";
            cin >> FATrunk31 >> FATrunk32 >> FATrunk33;
        }
        if (NumberOfTrunkFE == 4 && SEQ_FA == 1)
        {
            cout << "Type the FastEthernet Trunk port numbers: ";
            cin >> FATrunk41 >> FATrunk42 >> FATrunk43 >> FATrunk44;
        }
        if (NumberOfTrunkFE == 5 && SEQ_FA == 1)
        {
            cout << "Type the FastEthernet Trunk port numbers: ";
            cin >> FATrunk51 >> FATrunk52 >> FATrunk53 >> FATrunk54 >> FATrunk55;
        }
        if (NumberOfTrunkFE == 6 && SEQ_FA == 1)
        {
            cout << "Type the FastEthernet Trunk port numbers: ";
            cin >> FATrunk61 >> FATrunk62 >> FATrunk63 >> FATrunk64 >> FATrunk65 >> FATrunk66;
        }
    }

    if (NumberOfTrunkFE == 1 && SEQ_FA == 2)
    {
        cout << "Type the FastEthernet Trunk port number: ";
        cin >> FATrunk1;
    }
    if (NumberOfTrunkFE == 2 && SEQ_FA == 2)
    {
        cout << "Type the FastEthernet Trunk port numbers: ";
        cin >> FATrunk21 >> FATrunk22;
    }
    if (NumberOfTrunkFE == 3 && SEQ_FA == 2)
    {
        cout << "Type the FastEthernet Trunk port numbers: ";
        cin >> FATrunk31 >> FATrunk32 >> FATrunk33;
    }
    if (NumberOfTrunkFE == 4 && SEQ_FA == 2)
    {
        cout << "Type the FastEthernet Trunk port numbers: ";
        cin >> FATrunk41 >> FATrunk42 >> FATrunk43 >> FATrunk44;
    }
    if (NumberOfTrunkFE == 5 && SEQ_FA == 2)
    {
        cout << "Type the FastEthernet Trunk port numbers: ";
        cin >> FATrunk51 >> FATrunk52 >> FATrunk53 >> FATrunk54 >> FATrunk55;
    }
    if (NumberOfTrunkFE == 6 && SEQ_FA == 2)
    {
        cout << "Type the FastEthernet Trunk port numbers: ";
        cin >> FATrunk61 >> FATrunk62 >> FATrunk63 >> FATrunk64 >> FATrunk65 >> FATrunk66;
    }

    cout << "Number of GigEthernet ports: ";
    cin >> GigEthernet_ports;

    if (GigEthernet_ports != 0)
    {
        cout << "How many VLANS per port ( 0, 1, 2, or 3 ): ";
        cin >> VLANS_PerPort_GE;

        cout << "What type of sequence number is being used (1: 0/1 or 2: 1/0/1): ";
        cin >> SEQ_GE;

        cout << "How many GigEthernet ports should be trunk ports: ";
        cin >> NumberOfTrunkGE;
    }

    if (SEQ_GE == 1)
    {
        cout << "Type the sequence number of the first GigEthernet port: ";
        cin >> c >> DUMMY >> d;
    }
    else if (SEQ_GE == 2)
    {
        cout << "Type the sequence number of the first GigEthernet port: ";
        cin >> u >> DUMMY >> v >> DUMMY >> w;
    }

    if (NumberOfTrunkGE != 0)
    {
        if (NumberOfTrunkGE == 1 && SEQ_GE == 1)
        {
            cout << "Type the GigabitEthernet Trunk port number: ";
            cin >> GETrunk1;
        }
        if (NumberOfTrunkGE == 2 && SEQ_GE == 1)
        {
            cout << "Type the GigabitEthernet Trunk port numbers: ";
            cin >> GETrunk21 >> GETrunk22;
        }
        if (NumberOfTrunkGE == 3 && SEQ_GE == 1)
        {
            cout << "Type the GigabitEthernet Trunk port numbers: ";
            cin >> GETrunk31 >> GETrunk32 >> GETrunk33;
        }
        if (NumberOfTrunkGE == 4 && SEQ_GE == 1)
        {
            cout << "Type the GigabitEthernet Trunk port numbers: ";
            cin >> GETrunk41 >> GETrunk42 >> GETrunk43 >> GETrunk44;
        }
        if (NumberOfTrunkGE == 5 && SEQ_GE == 1)
        {
            cout << "Type the GigabitEthernet Trunk port numbers: ";
            cin >> GETrunk51 >> GETrunk52 >> GETrunk53 >> GETrunk54 >> GETrunk55;
        }
        if (NumberOfTrunkGE == 6 && SEQ_GE == 1)
        {
            cout << "Type the GigabitEthernet Trunk port numbers: ";
            cin >> GETrunk61 >> GETrunk62 >> GETrunk63 >> GETrunk64 >> GETrunk65 >> GETrunk66;
        }
    }

    if (NumberOfTrunkGE == 1 && SEQ_GE == 2)
    {
        cout << "Type the GigabitEthernet Trunk port number: ";
        cin >> GETrunk1;
    }
    if (NumberOfTrunkGE == 2 && SEQ_GE == 2)
    {
        cout << "Type the GigabitEthernet Trunk port numbers: ";
        cin >> GETrunk21 >> GETrunk22;
    }
    if (NumberOfTrunkGE == 3 && SEQ_GE == 2)
    {
        cout << "Type the GigabitEthernet Trunk port numbers: ";
        cin >> GETrunk31 >> GETrunk32 >> GETrunk33;
    }
    if (NumberOfTrunkGE == 4 && SEQ_GE == 2)
    {
        cout << "Type the GigabitEthernet Trunk port numbers: ";
        cin >> GETrunk41 >> GETrunk42 >> GETrunk43 >> GETrunk44;
    }
    if (NumberOfTrunkGE == 5 && SEQ_GE == 2)
    {
        cout << "Type the GigabitEthernet Trunk port numbers: ";
        cin >> GETrunk51 >> GETrunk52 >> GETrunk53 >> GETrunk54 >> GETrunk55;
    }
    if (NumberOfTrunkGE == 6 && SEQ_GE == 2)
    {
        cout << "Type the GigabitEthernet Trunk port numbers: ";
        cin >> GETrunk61 >> GETrunk62 >> GETrunk63 >> GETrunk64 >> GETrunk65 >> GETrunk66;
    }

    cout << "\n\n\nPaste the following output in the Access Switch:\n\n" << endl;
    cout << "config t" << endl;
    cout << "hostname " << Hostname << endl;
    cout << "username nbb secret nbb321" << endl;
    cout << "enable secret nbb123" << endl;
    cout << "line vty 0 4" << endl;
    cout << "login local" << endl;
    cout << "line console 0" << endl;
    cout << "login local" << endl;
    cout << "exit" << endl;
    cout << "ip routing" << endl;
    cout << "vtp mode transparent"  << endl;
    cout << "service unsupported-transceiver" << endl;
    cout << "no errdisable detect cause gbic-invalid" << endl;
    cout << "vlan 900" << endl;
    cout << "exit" << endl;
    cout << "int vlan 900" << endl;
    cout << "description ***MANAGEMENT VLAN***" << endl;
    cout << "ip address " << ManagementVLAN_IP << " " << ManagementVLAN_Mask << endl;
    cout << "exit" << endl;
    cout << "ip route 0.0.0.0 0.0.0.0 " << Default_Route << endl;
    cout << "vlan " << START_RANGE << "-" << END_RANGE << endl;
    cout << "exit" << endl;

    //Following is the output code for fast ethernet case

    if (VLANS_PerPort != 0)
    {
        if (VLANS_PerPort == 1 && SEQ_FA == 1)
        {
            for (VLAN = START_RANGE, b = 1; b <= FastEthernet_ports; VLAN++, b++)
            {
                cout << "int fa " << a << "/" << b << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort == 1 && SEQ_FA == 2)
        {
            for (VLAN = START_RANGE, z=1; z <= FastEthernet_ports; VLAN++, z++)
            {
                cout << "int fa " << x << "/" << y << "/" << z << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort == 2 && SEQ_FA == 1)
        {
            for (VLAN = START_RANGE, b = 1; b <= FastEthernet_ports ; VLAN++, b++)
            {
                cout << "int fa " << a << "/" << b << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
                cout << "int fa " << a << "/" << ++b << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort == 2 && SEQ_FA == 2)
        {
            for (VLAN = START_RANGE, z = 1; z <= FastEthernet_ports ; VLAN++, z++)
            {
                cout << "int fa " << x << "/" << y << "/" << z << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
                cout << "int fa " << x << "/" << y << "/" << ++z << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort == 3 && SEQ_FA == 1)
        {
            for (VLAN = START_RANGE, b = 1; b <= FastEthernet_ports ; VLAN++, b++)
            {
                cout << "int fa " << a << "/" << b << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
                cout << "int fa " << a << "/" << ++b << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
                cout << "int fa " << a << "/" << ++b << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort == 3 && SEQ_FA == 2)
        {
            for (VLAN = START_RANGE, z = 1; z <= FastEthernet_ports ; VLAN++, z++)
            {
                cout << "int fa " << x << "/" << y << "/" << z << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
                cout << "int fa " << x << "/" << y << "/" << ++z << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
                cout << "int fa " << x << "/" << y << "/" << ++z << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN << endl;
                cout << "exit" << endl;
            }
        }
    }
    if (NumberOfTrunkFE == 1 && SEQ_FA == 1)
    {
        cout << "int fa " << a << "/" << FATrunk1 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 2 && SEQ_FA == 1)
    {
        cout << "int fa " << a << "/" << FATrunk21 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk22 << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 3 && SEQ_FA == 1)
    {
        cout << "int fa " << a << "/" << FATrunk31 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk32 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk33 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 4 && SEQ_FA == 1)
    {
        cout << "int fa " << a << "/" << FATrunk41 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk42 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk43 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk44 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 5 && SEQ_FA == 1)
    {
        cout << "int fa " << a << "/" << FATrunk51 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk52 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk53 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk54 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk55 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 6 && SEQ_FA == 1)
    {
        cout << "int fa " << a << "/" << FATrunk61 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk62 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk63 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk64 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk65 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << a << "/" << FATrunk66 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 1 && SEQ_FA == 2)
    {
        cout << "int fa " << x << "/" << y << "/" << FATrunk1 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 2 && SEQ_FA == 2)
    {
        cout << "int fa " << x << "/" << y << "/" << FATrunk21 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk22 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 3 && SEQ_FA == 2)
    {
        cout << "int fa " << x << "/" << y << "/" << FATrunk31 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk32 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk33 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 4 && SEQ_FA == 2)
    {
        cout << "int fa " << x << "/" << y << "/" << FATrunk41 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk42 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk43 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk44 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 5 && SEQ_FA == 2)
    {
        cout << "int fa " << x << "/" << y << "/" << FATrunk51 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk52 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk53 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk54 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk55 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkFE == 6 && SEQ_FA == 2)
    {
        cout << "int fa " << x << "/" << y << "/" << FATrunk61 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk62 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk63 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk64 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk65 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int fa " << x << "/" << y << "/" << FATrunk66 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    //Following is the output code for gigabit ethernet case
    if (VLANS_PerPort_GE != 0)
    {
        if (VLANS_PerPort_GE == 1 && SEQ_GE == 1)
        {
            for (VLAN_GE = START_RANGE_GE, d = 1; d <= GigEthernet_ports; VLAN_GE++, d++)
            {
                cout << "int gi " << c << "/" << d << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort_GE == 1 && SEQ_GE == 2)
        {
            for (VLAN_GE = START_RANGE_GE, w = 1; w <= GigEthernet_ports; VLAN_GE++, w++)
            {
                cout << "int gi " << u << "/" << v << "/" << w << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort_GE == 2 && SEQ_GE == 1)
        {
            for (VLAN_GE = START_RANGE_GE, d = 1; d <= GigEthernet_ports ; VLAN_GE++, d++)
            {
                cout << "int gi " << c << "/" << d << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
                cout << "int gi " << c << "/" << ++d << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort_GE == 2 && SEQ_GE == 2)
        {
            for (VLAN_GE = START_RANGE_GE, w = 1; w <= GigEthernet_ports ; VLAN_GE++, w++)
            {
                cout << "int gi " << u << "/" << v << "/" << w << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
                cout << "int gi " << u << "/" << v << "/" << ++w << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort_GE == 3 && SEQ_GE == 1)
        {
            for (VLAN_GE = START_RANGE_GE, d = 1; d <= GigEthernet_ports ; VLAN_GE++, d++)
            {
                cout << "int gi " << c << "/" << d << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
                cout << "int gi " << c << "/" << ++d << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
                cout << "int gi " << c << "/" << ++d << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
            }
        }
        if (VLANS_PerPort_GE == 3 && SEQ_GE == 2)
        {
            for (VLAN_GE = START_RANGE_GE, w = 1; w <= GigEthernet_ports ; VLAN_GE++, w++)
            {
                cout << "int gi " << u << "/" << v << "/" << w << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
                cout << "int gi " << u << "/" << v << "/" << ++w << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
                cout << "int gi " << u << "/" << v << "/" << ++w << endl;
                cout << "switchport mode access" << endl;
                cout << "storm-control broadcast level 10.00" << endl;
                cout << "storm-control multicast level 10.00" << endl;
                cout << "switchport access vlan " << VLAN_GE << endl;
                cout << "exit" << endl;
            }
        }
    }
    if (NumberOfTrunkGE == 1 && SEQ_GE == 1)
    {
        cout << "int gi " << c << "/" << GETrunk1 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 2 && SEQ_GE == 1)
    {
        cout << "int gi " << c << "/" << GETrunk21 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk22 << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 3 && SEQ_GE == 1)
    {
        cout << "int gi " << c << "/" << GETrunk31 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk32 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk33 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 4 && SEQ_GE == 1)
    {
        cout << "int gi " << c << "/" << GETrunk41 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk42 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk43 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk44 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 5 && SEQ_GE == 1)
    {
        cout << "int gi " << c << "/" << GETrunk51 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk52 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk53 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk54 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk55 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 6 && SEQ_GE == 1)
    {
        cout << "int gi " << c << "/" << GETrunk61 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk62 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk63 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk64 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk65 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << c << "/" << GETrunk66 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 1 && SEQ_GE == 2)
    {
        cout << "int gi " << u << "/" << v << "/" << GETrunk1 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 2 && SEQ_GE == 2)
    {
        cout << "int gi " << u << "/" << v << "/" << GETrunk21 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk22 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 3 && SEQ_GE == 2)
    {
        cout << "int gi " << u << "/" << v << "/" << GETrunk31 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk32 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk33 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 4 && SEQ_GE == 2)
    {
        cout << "int gi " << u << "/" << v << "/" << GETrunk41 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk42 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk43 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk44 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 5 && SEQ_GE == 2)
    {
        cout << "int gi " << u << "/" << v << "/" << GETrunk51 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk52 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk53 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk54 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk55 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    if (NumberOfTrunkGE == 6 && SEQ_GE == 2)
    {
        cout << "int gi " << u << "/" << v << "/" << GETrunk61 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk62 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk63 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk64 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk65 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
        cout << "int gi " << u << "/" << v << "/" << GETrunk66 << endl;
        cout << "no switchport mode access" << endl;
        cout << "no storm-control broadcast level 10.00" << endl;
        cout << "no storm-control multicast level 10.00" << endl;
        cout << "switchport trunk encapsulation dot1q" << endl;
        cout << "switchport trunk allowed vlan " << 101 << "-" << 500 << ",900" << endl;
        cout << "switchport mode trunk" << endl;
        cout << "exit" << endl;
    }
    cout << "exit" << endl;
    cout << "copy run start" << endl;
    getch();
    return 0;
}
