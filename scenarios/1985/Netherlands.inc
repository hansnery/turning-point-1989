#####################
# Country main data #
#####################

country =
{ tag                    = HOL
  capital                = 47
  manpower               = 200
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 10000
  transports             = 150
  escorts                = 21
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
   # Homeland 
   nationalprovinces      = {  46 47 48 49 77 78 79 801 1019 1082 561 2965 4285 6502 7043 7191 51 45 50 69  } 
   # Homeland 
   ownedprovinces         = {  46 47 48 49 77 78 79 801 1019 1082 561 2965 4285 6502 7043 7191  } 
   # Homeland 
   controlledprovinces    = {  46 47 48 49 77 78 79 801 1019 1082 561 2965 4285 6502 7043 7191  } 
  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030
   #Motorized
   1100 1110 1120
   #Mountain
   1160 1170 1180
   #Special Forces
   1250 1260 1270
   #Naval Infantry
   1560 1570 1580
   #Airborne Infantry
   1670 1680 1690
   #Air Cavalry
   1396 1400
   #Armored Cavalry
   13060 13070
   #Mechanized
   1470 1480 1490
   #Irregular Infantry
   1360 1370 1380
   #Combat Engineers
   1830 1840 1850
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646
   #Infantry Fighting Vehicles	
   2100
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450 21180
   #Armored Personnel Carriers
   2170 2180 2850 2400 
   #Field Artillery
   2290 2300 2310
   #Self-Propelled Anti-Air
   2810 2820 2510
   #Man-Portable Air-Defense Systems
   3000 3170
   #Self-Propelled Artillery
   2220 2230
   #Self-Propelled Rocket Artillery
   2980 2260 2270
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110 3120 3130
   #Cruisers
   3410 3420 3430 3440
   #Destroyers
   3310 3320 3330 3340
   #Light Aircraft Carriers
   12100
   #Submarines
   3010 3020 3030
   #Transport Ships
   3900 3910 3920
   ###################
   #    Aircraft     #
   ###################
   #Attack Helicopter
   4900
   #Reconnaissance Aircraft
   4770
   #Strategic Bomber
   4800
   #Strike Bomber
   15040
   #Naval Patrol
   4610
   #ASW Bomber
   4230
   #Attack Aircraft
   4030 4060 4090
   #Multi-Role
   4500 4570 4530 4540
   #Air Superiority Fighter
   4510 4520
   #Air Transports
   4250 4260
   #AEW&C
   4450 #4180
   #Air-to-Ground Missiles
   4040
   #Air-to-Air Missiles
   4600
   #Air-to-Sea Missiles
   4740
   ###################
   #    Industry     #
   ###################
   #Light Industry
   5810 5820
   #Heavy Industry
   5130 5110
   #Material Science
   53050 63160 63070
   #Construction Eng.
   5800 5080
   #Rocketry

   #Agriculture
   5700 5710 5010
   #Oil
   5190 5220
   #Computing
   5310 54010 54020
   #Nuclear
   5470 5480 5490
   #Research
   5316
   #Cryptography
   5350 5360
   #Medicine
   5600 5610
   5630
   5660 5730
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6560 #Defensive
   ###################
   # Naval Doctrines #
   ###################
   #Surface Ship Role
   81050 81060 81070 81080 81090 81100 81110 81120
   #Naval Interdiction
   8500 8510 8520 8550 8560 8570 8600 8610 8620
   #Naval Supremacy
   8100 8110 8150 8120 8160 8170 8200 8210 8220
   #Logistics Support
   82500 82510 82520 82530
   #Naval Capability
   8010
   #Amphibious Warfare
   82300
   ###################
   #  Air Doctrines  #
   ###################
   9390 9260 9400 9410
   9090 9100 9110 9120 9050 9060 9070
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   9130 9420 9300
   }
  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
     political_left    = 2 
     free_market       = 9 
     freedom           = 10 
     professional_army = 3 
     defense_lobby     = 1 
     interventionism   = 1 
  }
  headofstate            = { type = 9 id = 8001 }
  headofgovernment       = { type = 9 id = 8002 }
  foreignminister        = { type = 9 id = 8003 }
  armamentminister       = { type = 9 id = 8004 }
  ministerofsecurity     = { type = 9 id = 8005 }
  ministerofintelligence = { type = 9 id = 8006 }
  chiefofstaff           = { type = 9 id = 8007 }
  chiefofarmy            = { type = 9 id = 8008 }
  chiefofnavy            = { type = 9 id = 8009 }
  chiefofair             = { type = 9 id = 8010 }
  
   # #####################################
   # ARMY
   # #####################################
   # 1 Netherlands Corps
   landunit = 
   { location = 77
     name     = "1st Infantry Division" 
     id       = {  type = 18500 id = 1  } 
     division = 
     { id       = {  type = 18500 id = 2  } 
       name     = "1st Infantry Division" 
       type     = hq 
       model    = 2
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	 division = 
     { id       = {  type = 18500 id = 3  } 
       name     = "13th Armor Division" 
       type     = armor 
       model    = 4
       strength = 100
		extra    = engineer
       brigade_model = 5	   
      }
	  division = 
     { id       = {  type = 18500 id = 4  } 
       name     = "11th MechInf Brigade" 
       type     = d_06 
       model    = 2
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 18500 id = 5  } 
       name     = "12th MechInf Brigade" 
       type     = d_06 
       model    = 2
       strength = 95 
	   extra    = sp_anti_air
       brigade_model = 3
      }
	} 
#########
landunit = 
   { location = 79
     name     = "4th Infantry Division" 
     id       = {  type = 18500 id = 6  } 
     division = 
     { id       = {  type = 18500 id = 7  } 
       name     = "4th Infantry Division" 
       type     = hq 
       model    = 2
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	 division = 
     { id       = {  type = 18500 id = 8  } 
       name     = "41st Armor Division" 
       type     = armor 
       model    = 4
       strength = 100
		extra    = engineer
       brigade_model = 5	   
      }
	  division = 
     { id       = {  type = 18500 id = 9  } 
       name     = "42nd MechInf Brigade" 
       type     = d_06 
       model    = 2
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 18500 id = 10  } 
       name     = "43rd MechInf Brigade" 
       type     = d_06 
       model    = 2
       strength = 95 
	   extra    = sp_anti_air
       brigade_model = 3
      }
	} 
#########
landunit = 
   { location = 49
     name     = "5th Infantry Division" 
     id       = {  type = 18500 id = 11  } 
     division = 
     { id       = {  type = 18500 id = 12  } 
       name     = "5th Infantry Division" 
       type     = hq 
       model    = 2
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	 division = 
     { id       = {  type = 18500 id = 13  } 
       name     = "51st Armor Division" 
       type     = armor 
       model    = 4 
       strength = 100
		extra    = engineer
       brigade_model = 5	   
      }
	  division = 
     { id       = {  type = 18500 id = 14  } 
       name     = "52nd MechInf Brigade" 
       type     = d_06 
       model    = 2
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 18500 id = 15  } 
       name     = "53rd MechInf Brigade" 
       type     = d_06 
       model    = 2
       strength = 95 
	   extra    = sp_anti_air
       brigade_model = 3
      }
	}
	# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 18500 id = 16 }
	name = "Royal Dutch Airforce"
	location = 47 
	base = 47 
	division = {
	id = { type = 18500 id = 17 }
		name = "311 Squadron"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 18500 id = 18 }
		name = "312 Squadron"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 18500 id = 19 }
		name = "313 Squadron"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 18500 id = 20 }
		name = "314 Squadron"
		strength = 100
		type = cas
		model = 5
		}
	division = {
	id = { type = 18500 id = 21 }
		name = "315 Squadron"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 18500 id = 22 }
		name = "316 Squadron"
		strength = 100
		type = cas
		model = 5
		}
	division = {
	id = { type = 18500 id = 23 }
		name = "322 Squadron"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 18500 id = 24 }
		name = "323 Squadron"
		strength = 100
		type = multi_role
		model = 5
		}
	}
###################
## NAVY
###############
	navalunit =  {
		name = "Naval Corps 1"  
		id = {  type = 18500 id = 25  }  
		location = 47  
		base     = 47  
		division = {
			id = {  type = 18500 id = 26  }  
			name = "Schipol"  
			type = light_cruiser 
			model = 4
		}
		division = {
			id = {  type = 18500 id = 27  }  
			name = "Ajax"  
			type = destroyer 
			model = 6
		}
	}
}