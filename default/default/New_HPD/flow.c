/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 06/25/2020 05:05:02
    Flow details:
    Build details: 4.3.0 (build# 75)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=http://204.12.230.74:8080/tours/index.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083609446.png",
        "Snapshot=webpage_1593083641520.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);

    //Page Auto splitted for application/json type
    ns_start_transaction("plugins_win_json");
    ns_web_url ("plugins_win_json",
        "URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593083641520.png",
        "Snapshot=webpage_1593083641547.png"
    );

    ns_end_transaction("plugins_win_json", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
 /*   ns_start_transaction("experimentstatus");
    ns_web_url ("experimentstatus",
        "URL=https://clients4.google.com/chrome-sync/dev/experimentstatus",
        "METHOD=POST",
        "HEADER=Content-Length:13",
        "HEADER=Content-Type:application/octet-stream",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083641547.png",
        "Snapshot=webpage_1593083644106.png"
    );

    ns_end_transaction("experimentstatus", NS_AUTO_STATUS);
    ns_page_think_time(18.346);
*/
    //Page Auto splitted for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://204.12.230.74:8080/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=plane&password=plane&login.x=28&login.y=16&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083662452.png",
        "Snapshot=webpage_1593083675354.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(11.917);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083687180.png",
        "Snapshot=webpage_1593083703192.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(22.979);

    //Page Auto splitted for Image Link 'Home Button' Clicked by User
    ns_start_transaction("home");
    ns_web_url ("home",
        "URL=http://204.12.230.74:8080/cgi-bin/home",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083726122.png",
        "Snapshot=webpage_1593083732311.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("home", NS_AUTO_STATUS);
    ns_page_think_time(18.147);

    //Page Auto splitted for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation_2");
    ns_web_url ("reservation_2",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083748831.png",
        "Snapshot=webpage_1593083753352.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_2", NS_AUTO_STATUS);
    ns_page_think_time(3.075);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=80&findFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083755357.png",
        "Snapshot=webpage_1593083758924.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(2.909);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=87&reserveFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083761728.png",
        "Snapshot=webpage_1593083766801.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(5.258);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=98&buyFlights.y=12&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083771923.png",
        "Snapshot=webpage_1593083774394.png",
        INLINE_URLS,
            "URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req=ChkKCGNocm9taXVtEg03OS4wLjM5NDUuMTMwGgwIARABIgQgASACKAMaDAgFEAEiBCABIAIoARoMCAEQASIEIAEgAigBGgwIAxABIgQgASACKAEaDAgHEAEiBCABIAIoARoMCAEQCCIEIAEgAigEGgwIDxABIgQgASACKAEiAggB&$ct=application/x-protobuf&key=dummytoken", "HEADER=X-HTTP-Method-Override:POST", "HEADER=Sec-Fetch-Site:none", "HEADER=Sec-Fetch-Mode:no-cors", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(2.168);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_3");
    ns_web_url ("reservation_3",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=36&BookAnother.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083776459.png",
        "Snapshot=webpage_1593083779237.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_3", NS_AUTO_STATUS);
    ns_page_think_time(103.379);


    // 1st ticket

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_4");
    ns_web_url ("findflight_4",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=41&findFlights.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083882560.png",
        "Snapshot=webpage_1593083884967.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_4", NS_AUTO_STATUS);
    ns_page_think_time(3.167);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_5");
    ns_web_url ("findflight_5",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=99&reserveFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083888081.png",
        "Snapshot=webpage_1593083893348.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_5", NS_AUTO_STATUS);
    ns_page_think_time(2.337);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_6");
    ns_web_url ("findflight_6",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=62&buyFlights.y=9&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083895598.png",
        "Snapshot=webpage_1593083897925.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_6", NS_AUTO_STATUS);
    ns_page_think_time(2.714);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_4");
    ns_web_url ("reservation_4",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=53&BookAnother.y=15",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083900520.png",
        "Snapshot=webpage_1593083904365.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_4", NS_AUTO_STATUS);
    ns_page_think_time(2.002);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_7");
    ns_web_url ("findflight_7",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=61&findFlights.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083906292.png",
        "Snapshot=webpage_1593083908645.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_7", NS_AUTO_STATUS);
    ns_page_think_time(2.68);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_8");
    ns_web_url ("findflight_8",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=43&reserveFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083911262.png",
        "Snapshot=webpage_1593083913755.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_8", NS_AUTO_STATUS);
    ns_page_think_time(2.163);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_9");
    ns_web_url ("findflight_9",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=72&buyFlights.y=13&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083915822.png",
        "Snapshot=webpage_1593083918550.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_9", NS_AUTO_STATUS);
    ns_page_think_time(3.281);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_5");
    ns_web_url ("reservation_5",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=26&BookAnother.y=19",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083921669.png",
        "Snapshot=webpage_1593083925882.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_5", NS_AUTO_STATUS);
    ns_page_think_time(2.293);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_10");
    ns_web_url ("findflight_10",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=49&findFlights.y=3",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083928119.png",
        "Snapshot=webpage_1593083942777.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_10", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json");
    ns_web_url ("json",
        "URL=https://update.googleapis.com/service/update2/json?cup2key=9:2974943943&cup2hreq=12910a8fc1b697f0aad01fa0af1e5239063ee84d220feeb47a134f2a9a1ea4e8",
        "METHOD=POST",
        "HEADER=Content-Length:1346",
        "HEADER=X-Goog-Update-AppId:oimompecagnajdejgnnjijobebaeigek,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,gcmjkmgdlgnkkcocmoeiminaijmmjnii,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,bklopemakmnopmghhmccadeonafabnal,jflookgnkcckhobaglndicnbbgbonegd",
        "HEADER=X-Goog-Update-Interactivity:bg",
        "HEADER=X-Goog-Update-Updater:chrome-79.0.3945.130",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593083942777.png",
        "Snapshot=webpage_1593083943132.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"oimompecagnajdejgnnjijobebaeigek","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"bklopemakmnopmghhmccadeonafabnal","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"}],"arch":"x64","dedup":"cr","domainjoined":false,"hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{81dd07e3-7ba3-4683-9098-f3288afa7f25}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END
    );

    ns_end_transaction("json", NS_AUTO_STATUS);
    ns_page_think_time(12.145);


    // 10 transactions

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_11");
    ns_web_url ("findflight_11",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=95&reserveFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083955277.png",
        "Snapshot=webpage_1593083959820.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_11", NS_AUTO_STATUS);
    ns_page_think_time(3.585);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_12");
    ns_web_url ("findflight_12",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=61&buyFlights.y=18&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083963193.png",
        "Snapshot=webpage_1593083966965.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_12", NS_AUTO_STATUS);
    ns_page_think_time(2.662);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_6");
    ns_web_url ("reservation_6",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=105&BookAnother.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083969312.png",
        "Snapshot=webpage_1593083971599.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_6", NS_AUTO_STATUS);
    ns_page_think_time(2.28);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_13");
    ns_web_url ("findflight_13",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=61&findFlights.y=2",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083973822.png",
        "Snapshot=webpage_1593083982118.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_13", NS_AUTO_STATUS);
    ns_page_think_time(0.997);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_14");
    ns_web_url ("findflight_14",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=88&reserveFlights.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083983037.png",
        "Snapshot=webpage_1593083986791.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_14", NS_AUTO_STATUS);
    ns_page_think_time(1.794);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_15");
    ns_web_url ("findflight_15",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=49&buyFlights.y=7&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083988481.png",
        "Snapshot=webpage_1593083992447.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_15", NS_AUTO_STATUS);
    ns_page_think_time(2.499);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_7");
    ns_web_url ("reservation_7",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=37&BookAnother.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593083994831.png",
        "Snapshot=webpage_1593084000832.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_7", NS_AUTO_STATUS);
    ns_page_think_time(1.803);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_16");
    ns_web_url ("findflight_16",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=25&findFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084002472.png",
        "Snapshot=webpage_1593084006695.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_16", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json_2");
    ns_web_url ("json_2",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Length:1010",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593084006695.png",
        "Snapshot=webpage_1593084007024.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"oimompecagnajdejgnnjijobebaeigek","event":[{"download_time_ms":57130,"downloaded":5205379,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"4.10.1610.0","previousversion":"0.0.0.0","total":5205379,"url":"http://redirector.gvt1.com/edgedl/chromewebstore/L2Nocm9tZV9leHRlbnNpb24vYmxvYnMvNTQ2QUFXaFBmeHYtb0xmZjM3YU5MN0FwZw/4.10.1610.0_oimompecagnajdejgnnjijobebaeigek.crx"},{"eventresult":1,"eventtype":3,"nextfp":"1.3a7afafe965da76cea59344022f69dcb9eaaef382ce56eb1daa8d20f9ec80c16","nextversion":"4.10.1610.0","previousversion":"0.0.0.0"}],"version":"4.10.1610.0"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{a850915f-b39c-45c3-bbe4-b33541463476}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("json_2", NS_AUTO_STATUS);
    ns_page_think_time(2.319);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_17");
    ns_web_url ("findflight_17",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=94&reserveFlights.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084009897.png",
        "Snapshot=webpage_1593084012612.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_17", NS_AUTO_STATUS);
    ns_page_think_time(2.482);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_18");
    ns_web_url ("findflight_18",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=77&buyFlights.y=19&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084014840.png",
        "Snapshot=webpage_1593084019123.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_18", NS_AUTO_STATUS);
    ns_page_think_time(1.546);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_8");
    ns_web_url ("reservation_8",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=24&BookAnother.y=19",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084020604.png",
        "Snapshot=webpage_1593084022948.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_8", NS_AUTO_STATUS);
    ns_page_think_time(2.252);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_19");
    ns_web_url ("findflight_19",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=57&findFlights.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084025112.png",
        "Snapshot=webpage_1593084027506.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_19", NS_AUTO_STATUS);
    ns_page_think_time(2.155);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_20");
    ns_web_url ("findflight_20",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=58&reserveFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084029598.png",
        "Snapshot=webpage_1593084034519.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_20", NS_AUTO_STATUS);
    ns_page_think_time(2.202);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_21");
    ns_web_url ("findflight_21",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=59&buyFlights.y=11&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084036609.png",
        "Snapshot=webpage_1593084038865.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_21", NS_AUTO_STATUS);
    ns_page_think_time(2.416);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_9");
    ns_web_url ("reservation_9",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=23&BookAnother.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084041171.png",
        "Snapshot=webpage_1593084043674.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_9", NS_AUTO_STATUS);
    ns_page_think_time(21.138);


    // 20 transac

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_22");
    ns_web_url ("findflight_22",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=81&findFlights.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084064370.png",
        "Snapshot=webpage_1593084066890.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_22", NS_AUTO_STATUS);
    ns_page_think_time(1.539);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_23");
    ns_web_url ("findflight_23",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=86&reserveFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084068378.png",
        "Snapshot=webpage_1593084072203.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_23", NS_AUTO_STATUS);
    ns_page_think_time(2.367);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_24");
    ns_web_url ("findflight_24",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=63&buyFlights.y=3&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084074407.png",
        "Snapshot=webpage_1593084074332.png"
    );

    ns_end_transaction("findflight_24", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json_3");
    ns_web_url ("json_3",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Length:931",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593084074332.png",
        "Snapshot=webpage_1593084079689.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","event":[{"download_time_ms":6255,"downloaded":21471,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"5955","previousversion":"0.0.0.0","total":21471,"url":"http://redirector.gvt1.com/edgedl/release2/chrome_component/NGsCjkNN_l-5ZrRvdMytOg_5955/APuE64yS_BA92jbfK4E440s"},{"eventresult":1,"eventtype":3,"nextfp":"1.b16b7a2d9ae819bb649a252ef035e12a862647d5969f9d0ca724ff84d2fb6e89","nextversion":"5955","previousversion":"0.0.0.0"}],"version":"5955"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{2379e4cd-279f-450a-b33b-df697b5cbf54}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("json_3", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json_4");
    ns_web_url ("json_4",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Length:938",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593084079689.png",
        "Snapshot=webpage_1593084080062.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","event":[{"download_time_ms":4168,"downloaded":88209,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"9.12.0","previousversion":"0.0.0.0","total":88209,"url":"http://redirector.gvt1.com/edgedl/release2/chrome_component/c8EJlOUjhM9U2tz3dPrg0w_9.12.0/fiM7fud-bHoQvmG9i0anoQ"},{"eventresult":1,"eventtype":3,"nextfp":"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962","nextversion":"9.12.0","previousversion":"0.0.0.0"}],"version":"9.12.0"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{38c8a0ae-43d3-4db1-a79f-69548c422713}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END
    );

    ns_end_transaction("json_4", NS_AUTO_STATUS);
    ns_page_think_time(0.243);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_10");
    ns_web_url ("reservation_10",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=90&BookAnother.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084079820.png",
        "Snapshot=webpage_1593084082458.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_10", NS_AUTO_STATUS);
    ns_page_think_time(1.868);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_25");
    ns_web_url ("findflight_25",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=72&findFlights.y=1",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084084268.png",
        "Snapshot=webpage_1593084087480.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_25", NS_AUTO_STATUS);
    ns_page_think_time(1.366);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_26");
    ns_web_url ("findflight_26",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=66&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084088742.png",
        "Snapshot=webpage_1593084090670.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_26", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json_5");
    ns_web_url ("json_5",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Length:921",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593084090670.png",
        "Snapshot=webpage_1593084091019.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","event":[{"download_time_ms":4400,"downloaded":5497,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"42","previousversion":"0.0.0.0","total":5497,"url":"http://redirector.gvt1.com/edgedl/release2/chrome_component/X3KiQULzXVRuobdQuTC3aA_42/AKAlkAwHtNzEWFnOXjqsMa0"},{"eventresult":1,"eventtype":3,"nextfp":"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb","nextversion":"42","previousversion":"0.0.0.0"}],"version":"42"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{e8063e17-83b2-4204-82d1-0dc1fe3378e4}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("json_5", NS_AUTO_STATUS);
    ns_page_think_time(1.56);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_27");
    ns_web_url ("findflight_27",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=71&buyFlights.y=13&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084093078.png",
        "Snapshot=webpage_1593084095621.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_27", NS_AUTO_STATUS);
    ns_page_think_time(1.589);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_11");
    ns_web_url ("reservation_11",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=29&BookAnother.y=16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084096822.png",
        "Snapshot=webpage_1593084099308.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_11", NS_AUTO_STATUS);
    ns_page_think_time(1.579);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_28");
    ns_web_url ("findflight_28",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=62&findFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084100585.png",
        "Snapshot=webpage_1593084102985.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_28", NS_AUTO_STATUS);
    ns_page_think_time(1.552);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_29");
    ns_web_url ("findflight_29",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=105&reserveFlights.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084104425.png",
        "Snapshot=webpage_1593084107787.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_29", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json_6");
    ns_web_url ("json_6",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Length:918",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593084107787.png",
        "Snapshot=webpage_1593084108131.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","event":[{"download_time_ms":4955,"downloaded":5406,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"7","previousversion":"0.0.0.0","total":5406,"url":"http://redirector.gvt1.com/edgedl/release2/chrome_component/AIZk8O7Cv2UUbxc_aaUykKI_7/ALzUVHP-vRgKCzqwbtGugSE"},{"eventresult":1,"eventtype":3,"nextfp":"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace","nextversion":"7","previousversion":"0.0.0.0"}],"version":"7"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{658fc1aa-c504-4b0e-abbc-60681ddc930c}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END
    );

    ns_end_transaction("json_6", NS_AUTO_STATUS);
    ns_page_think_time(1.773);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_30");
    ns_web_url ("findflight_30",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=85&buyFlights.y=15&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084109904.png",
        "Snapshot=webpage_1593084129650.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_30", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json_7");
    ns_web_url ("json_7",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Length:905",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593084129650.png",
        "Snapshot=webpage_1593084130008.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"bklopemakmnopmghhmccadeonafabnal","event":[{"download_time_ms":4456,"downloaded":111426,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"3","previousversion":"0.0.0.0","total":111426,"url":"http://redirector.gvt1.com/edgedl/release2/APsb1jESj822mCcrfQWWPY0_3/AJwfq9FdNce-tcqe5_d1l9Q"},{"eventresult":1,"eventtype":3,"nextfp":"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e","nextversion":"3","previousversion":"0.0.0.0"}],"version":"3"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{8766819c-4483-41e1-8ce8-e97b1f924090}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END
    );

    ns_end_transaction("json_7", NS_AUTO_STATUS);
    ns_page_think_time(9.815);


    // 30 transactions

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_12");
    ns_web_url ("reservation_12",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=48&BookAnother.y=6",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084139823.png",
        "Snapshot=webpage_1593084142218.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_12", NS_AUTO_STATUS);
    ns_page_think_time(1.504);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_31");
    ns_web_url ("findflight_31",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=85&findFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084143421.png",
        "Snapshot=webpage_1593084146135.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_31", NS_AUTO_STATUS);
    ns_page_think_time(2.286);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_32");
    ns_web_url ("findflight_32",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=89&reserveFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084148369.png",
        "Snapshot=webpage_1593084151724.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_32", NS_AUTO_STATUS);
    ns_page_think_time(1.721);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_33");
    ns_web_url ("findflight_33",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=58&buyFlights.y=12&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084153260.png",
        "Snapshot=webpage_1593084156830.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_33", NS_AUTO_STATUS);
    ns_page_think_time(3.686);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_13");
    ns_web_url ("reservation_13",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=39&BookAnother.y=16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084160405.png",
        "Snapshot=webpage_1593084160308.png"
    );

    ns_end_transaction("reservation_13", NS_AUTO_STATUS);

    //Page Auto splitted for Method = POST
    ns_start_transaction("json_8");
    ns_web_url ("json_8",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Length:914",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "PreSnapshot=webpage_1593084160308.png",
        "Snapshot=webpage_1593084160659.png",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chrome","acceptformat":"crx2,crx3","app":[{"appid":"jflookgnkcckhobaglndicnbbgbonegd","event":[{"download_time_ms":5178,"downloaded":16072,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"1512","previousversion":"0.0.0.0","total":16072,"url":"http://redirector.gvt1.com/edgedl/release2/DbVgFbgv7yr6PeZo8w0Rhg_1512/ANEPOjzi9FmSN11NWTn_rn4"},{"eventresult":1,"eventtype":3,"nextfp":"1.d6c41ef958e05743b96ee23f0251aeb2e7b2dbc68fd9b5f8f0b0c48f87414c0d","nextversion":"1512","previousversion":"0.0.0.0"}],"version":"1512"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-GB","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18362.900"},"prodversion":"79.0.3945.130","protocol":"3.1","requestid":"{56741042-37c2-4663-9a57-c00fdf509af7}","sessionid":"{5f6fbb6c-be67-4fb5-a645-7343d102c4c9}","updaterversion":"79.0.3945.130"}}",
        BODY_END,
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("json_8", NS_AUTO_STATUS);
    ns_page_think_time(2.305);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_34");
    ns_web_url ("findflight_34",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=33&findFlights.y=22",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084166415.png",
        "Snapshot=webpage_1593084169026.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_34", NS_AUTO_STATUS);
    ns_page_think_time(1.263);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_35");
    ns_web_url ("findflight_35",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=95&reserveFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084170229.png",
        "Snapshot=webpage_1593084173308.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_35", NS_AUTO_STATUS);
    ns_page_think_time(1.836);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_36");
    ns_web_url ("findflight_36",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=72&buyFlights.y=1&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084175058.png",
        "Snapshot=webpage_1593084178414.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_36", NS_AUTO_STATUS);
    ns_page_think_time(4.616);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_14");
    ns_web_url ("reservation_14",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=22&BookAnother.y=5",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084182918.png",
        "Snapshot=webpage_1593084186349.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_14", NS_AUTO_STATUS);
    ns_page_think_time(2.369);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_97");
    ns_web_url ("findflight_97",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=35&findFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084188429.png",
        "Snapshot=webpage_1593084197879.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_97", NS_AUTO_STATUS);
    ns_page_think_time(0.002);

    ns_start_transaction("findflight_37");
    ns_web_url ("findflight_37",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=91&reserveFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084194228.png",
        "Snapshot=NA"
    );

    ns_end_transaction("findflight_37", NS_AUTO_STATUS);
    ns_page_think_time(0.101);

    ns_start_transaction("findflight_38");
    ns_web_url ("findflight_38",
        "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=NA",
        "Snapshot=webpage_1593084199945.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=91&reserveFlights.y=10", END_INLINE
    );

    ns_end_transaction("findflight_38", NS_AUTO_STATUS);
    ns_page_think_time(2.339);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_39");
    ns_web_url ("findflight_39",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=34&buyFlights.y=6&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084202189.png",
        "Snapshot=webpage_1593084204666.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_39", NS_AUTO_STATUS);
    ns_page_think_time(16.909);


    // 40 transactins

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_15");
    ns_web_url ("reservation_15",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=122&BookAnother.y=3",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084221338.png",
        "Snapshot=webpage_1593084225419.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_15", NS_AUTO_STATUS);
    ns_page_think_time(2.426);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_40");
    ns_web_url ("findflight_40",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=71&findFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084227779.png",
        "Snapshot=webpage_1593084237909.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_40", NS_AUTO_STATUS);
    ns_page_think_time(3.452);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_41");
    ns_web_url ("findflight_41",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=103&reserveFlights.y=15",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084239518.png",
        "Snapshot=webpage_1593084251355.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_41", NS_AUTO_STATUS);
    ns_page_think_time(2.103);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_42");
    ns_web_url ("findflight_42",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=65&buyFlights.y=7&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084253359.png",
        "Snapshot=webpage_1593084256110.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_42", NS_AUTO_STATUS);
    ns_page_think_time(4.632);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_16");
    ns_web_url ("reservation_16",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=39&BookAnother.y=15",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084260584.png",
        "Snapshot=webpage_1593084266281.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_16", NS_AUTO_STATUS);
    ns_page_think_time(1.8);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_43");
    ns_web_url ("findflight_43",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=41&findFlights.y=4",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084268041.png",
        "Snapshot=webpage_1593084275973.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_43", NS_AUTO_STATUS);
    ns_page_think_time(1.369);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_44");
    ns_web_url ("findflight_44",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=106&reserveFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084277270.png",
        "Snapshot=webpage_1593084280181.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_44", NS_AUTO_STATUS);
    ns_page_think_time(1.803);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_45");
    ns_web_url ("findflight_45",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=78&buyFlights.y=15&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084281799.png",
        "Snapshot=webpage_1593084285262.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_45", NS_AUTO_STATUS);
    ns_page_think_time(3.237);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_17");
    ns_web_url ("reservation_17",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=30&BookAnother.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084288401.png",
        "Snapshot=webpage_1593084290939.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_17", NS_AUTO_STATUS);
    ns_page_think_time(2.041);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_46");
    ns_web_url ("findflight_46",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=33&findFlights.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084292612.png",
        "Snapshot=webpage_1593084296960.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_46", NS_AUTO_STATUS);
    ns_page_think_time(2.218);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_47");
    ns_web_url ("findflight_47",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=93&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084299097.png",
        "Snapshot=webpage_1593084304306.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_47", NS_AUTO_STATUS);
    ns_page_think_time(2.559);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_48");
    ns_web_url ("findflight_48",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=75&buyFlights.y=10&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084306760.png",
        "Snapshot=webpage_1593084308983.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_48", NS_AUTO_STATUS);
    ns_page_think_time(2.322);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_18");
    ns_web_url ("reservation_18",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=27&BookAnother.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084311248.png",
        "Snapshot=webpage_1593084315479.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_18", NS_AUTO_STATUS);
    ns_page_think_time(14.448);


    // 50

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_49");
    ns_web_url ("findflight_49",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=60&findFlights.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084329894.png",
        "Snapshot=webpage_1593084337430.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_49", NS_AUTO_STATUS);
    ns_page_think_time(3.787);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_50");
    ns_web_url ("findflight_50",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=82&reserveFlights.y=18",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084341437.png",
        "Snapshot=webpage_1593084347849.png"
    );

    ns_end_transaction("findflight_50", NS_AUTO_STATUS);
    ns_page_think_time(0.209);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("banner_animated_gif");
    ns_web_url ("banner_animated_gif",
        "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084342391.png",
        "Snapshot=webpage_1593084343038.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("banner_animated_gif", NS_AUTO_STATUS);
    ns_page_think_time(2.386);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_51");
    ns_web_url ("findflight_51",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=88&buyFlights.y=12&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084349082.png",
        "Snapshot=webpage_1593084351920.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_51", NS_AUTO_STATUS);
    ns_page_think_time(3.258);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_19");
    ns_web_url ("reservation_19",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=39&BookAnother.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084354468.png",
        "Snapshot=webpage_1593084361664.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_19", NS_AUTO_STATUS);
    ns_page_think_time(2.511);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_52");
    ns_web_url ("findflight_52",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=83&findFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084364141.png",
        "Snapshot=webpage_1593084367024.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_52", NS_AUTO_STATUS);
    ns_page_think_time(1.14);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_53");
    ns_web_url ("findflight_53",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=100&reserveFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084368082.png",
        "Snapshot=webpage_1593084371271.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_53", NS_AUTO_STATUS);
    ns_page_think_time(6.439);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_54");
    ns_web_url ("findflight_54",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=99&buyFlights.y=13&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084377622.png",
        "Snapshot=webpage_1593084383228.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_54", NS_AUTO_STATUS);
    ns_page_think_time(4.166);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_20");
    ns_web_url ("reservation_20",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=20&BookAnother.y=23",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084386289.png",
        "Snapshot=webpage_1593084391567.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_20", NS_AUTO_STATUS);
    ns_page_think_time(4.794);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_55");
    ns_web_url ("findflight_55",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=58&findFlights.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084396258.png",
        "Snapshot=webpage_1593084399781.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_55", NS_AUTO_STATUS);
    ns_page_think_time(5.584);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_56");
    ns_web_url ("findflight_56",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=95&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084404548.png",
        "Snapshot=webpage_1593084408181.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_56", NS_AUTO_STATUS);
    ns_page_think_time(2.288);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_57");
    ns_web_url ("findflight_57",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=68&buyFlights.y=13&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084410359.png",
        "Snapshot=webpage_1593084413477.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_57", NS_AUTO_STATUS);
    ns_page_think_time(3.332);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_21");
    ns_web_url ("reservation_21",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=72&BookAnother.y=6",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084416176.png",
        "Snapshot=webpage_1593084420219.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_21", NS_AUTO_STATUS);
    ns_page_think_time(13.12);


    // 60

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_58");
    ns_web_url ("findflight_58",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=81&findFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084432997.png",
        "Snapshot=webpage_1593084435484.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_58", NS_AUTO_STATUS);
    ns_page_think_time(1.441);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_59");
    ns_web_url ("findflight_59",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=96&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084436859.png",
        "Snapshot=webpage_1593084440334.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_59", NS_AUTO_STATUS);
    ns_page_think_time(2.358);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_60");
    ns_web_url ("findflight_60",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=84&buyFlights.y=4&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084442596.png",
        "Snapshot=webpage_1593084445064.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_60", NS_AUTO_STATUS);
    ns_page_think_time(1.647);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_22");
    ns_web_url ("reservation_22",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=17&BookAnother.y=15",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084446343.png",
        "Snapshot=webpage_1593084448971.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_22", NS_AUTO_STATUS);
    ns_page_think_time(1.087);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_98");
    ns_web_url ("findflight_98",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=12&findFlights.y=3",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084449965.png",
        "Snapshot=webpage_1593084453828.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_98", NS_AUTO_STATUS);
    ns_page_think_time(896.104);

    ns_start_transaction("findflight_61");
    ns_web_url ("findflight_61",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=82&reserveFlights.y=7",
        "PreSnapshot=webpage_1593084453666.png",
        "Snapshot=NA"
    );

    ns_end_transaction("findflight_61", NS_AUTO_STATUS);
    ns_page_think_time(897.596);

    ns_start_transaction("findflight_62");
    ns_web_url ("findflight_62",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=82&reserveFlights.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=NA",
        "Snapshot=webpage_1593084458768.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_62", NS_AUTO_STATUS);
    ns_page_think_time(2.374);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_63");
    ns_web_url ("findflight_63",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=69&buyFlights.y=17&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084459780.png",
        "Snapshot=webpage_1593084463272.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_63", NS_AUTO_STATUS);
    ns_page_think_time(1.854);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_23");
    ns_web_url ("reservation_23",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=61&BookAnother.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084464572.png",
        "Snapshot=webpage_1593084467133.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_23", NS_AUTO_STATUS);
    ns_page_think_time(1.456);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_64");
    ns_web_url ("findflight_64",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=21&findFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084468489.png",
        "Snapshot=webpage_1593084471307.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_64", NS_AUTO_STATUS);
    ns_page_think_time(1.386);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_65");
    ns_web_url ("findflight_65",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=73&reserveFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084472568.png",
        "Snapshot=webpage_1593084475759.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_65", NS_AUTO_STATUS);
    ns_page_think_time(1.441);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_66");
    ns_web_url ("findflight_66",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=65&buyFlights.y=18&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084477098.png",
        "Snapshot=webpage_1593084479479.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_66", NS_AUTO_STATUS);
    ns_page_think_time(1.578);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_24");
    ns_web_url ("reservation_24",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=140&BookAnother.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084480737.png",
        "Snapshot=webpage_1593084486314.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_24", NS_AUTO_STATUS);
    ns_page_think_time(11.22);


    // 70

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_67");
    ns_web_url ("findflight_67",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=89&findFlights.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084497508.png",
        "Snapshot=webpage_1593084500269.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_67", NS_AUTO_STATUS);
    ns_page_think_time(2.504);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_68");
    ns_web_url ("findflight_68",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=83&reserveFlights.y=17",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084502597.png",
        "Snapshot=webpage_1593084507322.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_68", NS_AUTO_STATUS);
    ns_page_think_time(6.409);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_69");
    ns_web_url ("findflight_69",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=58&buyFlights.y=13&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084513638.png",
        "Snapshot=webpage_1593084522004.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_69", NS_AUTO_STATUS);
    ns_page_think_time(2.057);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_25");
    ns_web_url ("reservation_25",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=31&BookAnother.y=16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084523913.png",
        "Snapshot=webpage_1593084527844.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_25", NS_AUTO_STATUS);
    ns_page_think_time(4.152);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_70");
    ns_web_url ("findflight_70",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=56&findFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084531937.png",
        "Snapshot=webpage_1593084537131.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_70", NS_AUTO_STATUS);
    ns_page_think_time(5.253);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_71");
    ns_web_url ("findflight_71",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=77&reserveFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084540518.png",
        "Snapshot=webpage_1593084547890.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_71", NS_AUTO_STATUS);
    ns_page_think_time(2.513);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_72");
    ns_web_url ("findflight_72",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=86&buyFlights.y=9&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084550270.png",
        "Snapshot=webpage_1593084552937.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_72", NS_AUTO_STATUS);
    ns_page_think_time(2.216);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_26");
    ns_web_url ("reservation_26",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=50&BookAnother.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084554796.png",
        "Snapshot=webpage_1593084558682.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_26", NS_AUTO_STATUS);
    ns_page_think_time(1.512);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_73");
    ns_web_url ("findflight_73",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=30&findFlights.y=6",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084559893.png",
        "Snapshot=webpage_1593084562674.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_73", NS_AUTO_STATUS);
    ns_page_think_time(1.556);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_74");
    ns_web_url ("findflight_74",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=95&reserveFlights.y=6",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084563984.png",
        "Snapshot=webpage_1593084568235.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_74", NS_AUTO_STATUS);
    ns_page_think_time(2.177);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_75");
    ns_web_url ("findflight_75",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=53&buyFlights.y=1&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084570317.png",
        "Snapshot=webpage_1593084572751.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_75", NS_AUTO_STATUS);
    ns_page_think_time(1.819);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_27");
    ns_web_url ("reservation_27",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=3&BookAnother.y=17",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084574208.png",
        "Snapshot=webpage_1593084577810.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_27", NS_AUTO_STATUS);
    ns_page_think_time(1.537);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_76");
    ns_web_url ("findflight_76",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=47&findFlights.y=0",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084578946.png",
        "Snapshot=webpage_1593084581496.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_76", NS_AUTO_STATUS);
    ns_page_think_time(2.418);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_77");
    ns_web_url ("findflight_77",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=85&reserveFlights.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084583827.png",
        "Snapshot=webpage_1593084588720.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_77", NS_AUTO_STATUS);
    ns_page_think_time(1.848);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_78");
    ns_web_url ("findflight_78",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=73&buyFlights.y=11&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084590396.png",
        "Snapshot=webpage_1593084592930.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_78", NS_AUTO_STATUS);
    ns_page_think_time(1.603);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_28");
    ns_web_url ("reservation_28",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=12&BookAnother.y=16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084594247.png",
        "Snapshot=webpage_1593084596623.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_28", NS_AUTO_STATUS);
    ns_page_think_time(17.366);


    // 80

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_79");
    ns_web_url ("findflight_79",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=33&findFlights.y=15",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084613964.png",
        "Snapshot=webpage_1593084617398.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_79", NS_AUTO_STATUS);
    ns_page_think_time(1.998);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_80");
    ns_web_url ("findflight_80",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=98&reserveFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084618855.png",
        "Snapshot=webpage_1593084621591.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_80", NS_AUTO_STATUS);
    ns_page_think_time(2.132);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_81");
    ns_web_url ("findflight_81",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=32&buyFlights.y=4&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084623610.png",
        "Snapshot=webpage_1593084627045.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_81", NS_AUTO_STATUS);
    ns_page_think_time(1.652);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_29");
    ns_web_url ("reservation_29",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=19&BookAnother.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084628629.png",
        "Snapshot=webpage_1593084630959.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_29", NS_AUTO_STATUS);
    ns_page_think_time(2.424);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_82");
    ns_web_url ("findflight_82",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=52&findFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084633335.png",
        "Snapshot=webpage_1593084636683.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_82", NS_AUTO_STATUS);
    ns_page_think_time(2.805);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_83");
    ns_web_url ("findflight_83",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=99&reserveFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084639388.png",
        "Snapshot=webpage_1593084643997.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_83", NS_AUTO_STATUS);
    ns_page_think_time(2.892);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_84");
    ns_web_url ("findflight_84",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=75&buyFlights.y=9&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084646740.png",
        "Snapshot=webpage_1593084650284.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_84", NS_AUTO_STATUS);
    ns_page_think_time(2.623);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_30");
    ns_web_url ("reservation_30",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=53&BookAnother.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084652227.png",
        "Snapshot=webpage_1593084659611.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_30", NS_AUTO_STATUS);
    ns_page_think_time(1.734);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_85");
    ns_web_url ("findflight_85",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=48&findFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084661297.png",
        "Snapshot=webpage_1593084663796.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_85", NS_AUTO_STATUS);
    ns_page_think_time(1.341);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_99");
    ns_web_url ("findflight_99",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=95&reserveFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084664993.png",
        "Snapshot=webpage_1593084671780.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_99", NS_AUTO_STATUS);
    ns_page_think_time(1114.806);

    ns_start_transaction("findflight_86");
    ns_web_url ("findflight_86",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=58&buyFlights.y=16&.cgifields=saveCC",
        "PreSnapshot=webpage_1593084671611.png",
        "Snapshot=NA"
    );

    ns_end_transaction("findflight_86", NS_AUTO_STATUS);
    ns_page_think_time(1118.173);

    ns_start_transaction("findflight_87");
    ns_web_url ("findflight_87",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=58&buyFlights.y=16&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=NA",
        "Snapshot=webpage_1593084679416.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_87", NS_AUTO_STATUS);
    ns_page_think_time(2.668);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_31");
    ns_web_url ("reservation_31",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=99&BookAnother.y=2",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084681494.png",
        "Snapshot=webpage_1593084686274.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_31", NS_AUTO_STATUS);
    ns_page_think_time(10.203);


    // 90

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_88");
    ns_web_url ("findflight_88",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=99&findFlights.y=13",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084695732.png",
        "Snapshot=webpage_1593084698151.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_88", NS_AUTO_STATUS);
    ns_page_think_time(1.946);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_89");
    ns_web_url ("findflight_89",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=33&reserveFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084700045.png",
        "Snapshot=webpage_1593084704402.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_89", NS_AUTO_STATUS);
    ns_page_think_time(1.796);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_90");
    ns_web_url ("findflight_90",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=99&buyFlights.y=6&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084706070.png",
        "Snapshot=webpage_1593084710534.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_90", NS_AUTO_STATUS);
    ns_page_think_time(1.836);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_32");
    ns_web_url ("reservation_32",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=48&BookAnother.y=19",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084711245.png",
        "Snapshot=webpage_1593084713667.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_32", NS_AUTO_STATUS);
    ns_page_think_time(1.432);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_91");
    ns_web_url ("findflight_91",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=23&findFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084714787.png",
        "Snapshot=webpage_1593084720378.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_91", NS_AUTO_STATUS);
    ns_page_think_time(1.238);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_92");
    ns_web_url ("findflight_92",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=83&reserveFlights.y=10",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084721509.png",
        "Snapshot=webpage_1593084728805.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_92", NS_AUTO_STATUS);
    ns_page_think_time(1.549);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_93");
    ns_web_url ("findflight_93",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=67&buyFlights.y=11&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084729833.png",
        "Snapshot=webpage_1593084732283.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_93", NS_AUTO_STATUS);
    ns_page_think_time(3.012);

    //Page Auto splitted for Image Link 'BookAnother' Clicked by User
    ns_start_transaction("reservation_33");
    ns_web_url ("reservation_33",
        "URL=http://204.12.230.74:8080/cgi-bin/reservation?BookAnother.x=42&BookAnother.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084735230.png",
        "Snapshot=webpage_1593084738720.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation_33", NS_AUTO_STATUS);
    ns_page_think_time(3.312);

    //Page Auto splitted for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight_94");
    ns_web_url ("findflight_94",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?depart=Acapulco&departDate=06-26-2020&arrive=Acapulco&returnDate=06-27-2020&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=63&findFlights.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084741982.png",
        "Snapshot=webpage_1593084746817.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_94", NS_AUTO_STATUS);
    ns_page_think_time(2.871);

    //Page Auto splitted for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_95");
    ns_web_url ("findflight_95",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C06-26-2020&hidden_outboundFlight_button1=001%7C0%7C06-26-2020&hidden_outboundFlight_button2=002%7C0%7C06-26-2020&hidden_outboundFlight_button3=003%7C0%7C06-26-2020&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=74&reserveFlights.y=12",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084748089.png",
        "Snapshot=webpage_1593084753922.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_95", NS_AUTO_STATUS);
    ns_page_think_time(1.626);

    //Page Auto splitted for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_96");
    ns_web_url ("findflight_96",
        "URL=http://204.12.230.74:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C06-26-2020&advanceDiscount=&buyFlights.x=65&buyFlights.y=19&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084755407.png",
        "Snapshot=webpage_1593084758339.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_96", NS_AUTO_STATUS);
    ns_page_think_time(3.397);

    //Page Auto splitted for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://204.12.230.74:8080/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        "PreSnapshot=webpage_1593084761494.png",
        "Snapshot=webpage_1593084765696.png",
        INLINE_URLS,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=http://204.12.230.74:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(6.139);

}
