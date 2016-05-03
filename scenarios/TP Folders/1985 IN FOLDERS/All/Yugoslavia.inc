#####################
# Country main data #
#####################

 province = { id =	451	air_base = { size =	5 current_size = 5 } } # Nis
 province = { id =	382	air_base = { size =	5 current_size = 5 } } # zagreb

country =
{ tag                    = YUG
  ai                     = "YUG_1985.ai" 
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 15
  capital                = 453
  manpower               = 200
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation =
    { tag        = GRE
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation =
    { tag        = TUR
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 4 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  nationalprovinces      = { 
380 459 455 454 453 382 383 384 385 386 387 388 389 
451 452 415 493 494 413 414 
291 1891 1892 1893 1897 1895 1057 1894 1896 1168 1169
666 2326 2325 381 2289
2607 2608 2609
3359 3360 3361 3362 3363 3364 3365 3366 3367 3368 3369 3370 3371 3372 3373 3374 3393
3357 3358 3397
5464 6505 6534 6535 6536 6537 6538 6557 6558 6559 6560 6561 6562 6563 6564
7122 7267 7268 7269 7270 7271 7315 7937
461 7124 7125
  }
  ownedprovinces         = { 380 459 455 454 453 382  383 384 385 386 387 388 389 451 452 415 493 494 413 414 
							291 1891 1892 1893 1897 1895 1057 1894 1896 1168 1169 2289
							2607 2608 2609	3397
							3359	3360	3361	3362	3363	3364	3365	3366	3367	3368	3369	3370	3371	3372	3373	3374	3393
5464 6505 6534 6535 6536 6537 6538 6557 6558 6559 6560 6561 6562 6563 6564
7122 7267 7268 7269 7270 7271 7315 7937 3358 7125 2326 7124 3357 2325 381 
  }
  controlledprovinces    = { 380 459 455 454 453 382  383 384 385 386 387 388 389 451 452 415 493 494 413 414 
							291 1891 1892 1893 1897 1895 1057 1894 1896 1168 1169 2289
							2607 2608 2609	3397
							3359	3360	3361	3362	3363	3364	3365	3366	3367	3368	3369	3370	3371	3372	3373	3374	3393
5464 6505 6534 6535 6536 6537 6538 6557 6558 6559 6560 6561 6562 6563 6564
7122 7267 7268 7269 7270 7271 7315 7937 3358 7125 2326 7124 3357 2325 381
  }
  claimedprovinces 		 = { 665 456 6514 495 2602 6506 3375 }

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
   5560 5910
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
     democratic        = 1
     political_left    = 10
     freedom           = 1
     free_market       = 1
     professional_army = 3
     defense_lobby     = 8
     interventionism   = 6
  }
   headofstate            = {  type = 9 id = 100001  } 
   headofgovernment       = {  type = 9 id = 100002  } 
   foreignminister        = {  type = 9 id = 100003  } 
   armamentminister       = {  type = 9 id = 100004  } 
   ministerofsecurity     = {  type = 9 id = 100005  } 
   ministerofintelligence = {  type = 9 id = 100006  } 
   chiefofstaff           = {  type = 9 id = 100007  } 
   chiefofarmy            = {  type = 9 id = 100008  } 
   chiefofnavy            = {  type = 9 id = 100009  } 
   chiefofair             = {  type = 9 id = 100010  } 
  
   #19800
      # #####################################
	# ARMY
	# #####################################
    landunit = 
   { location = 385
     name     = "4th Corps" 
     id       = {  type = 19800 id = 1  } 
	 division = 
     { id       = {  type = 19800 id = 2  } 
       name     = "1st Army HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 5
      }
     division = 
     { id       = {  type = 19800 id = 3  } 
       name     = "10th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 }
########
	 landunit = 
   { location = 383
     name     = "5th Corps" 
     id       = {  type = 19800 id = 4  } 
     division = 
     { id       = {  type = 19800 id = 5  } 
       name     = "329th Armored Division" 
       type     = armor 
       model    = 5 
       strength = 50
		extra    = engineer
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 6  } 
       name     = "16th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 division = 
     { id       = {  type = 19800 id = 7  } 
       name     = "343rd Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_artillery
       brigade_model = 5
      }
	 }
###########
	 landunit = 
   { location = 493
     name     = "12th Corps" 
     id       = {  type = 19800 id = 8  } 
     division = 
     { id       = {  type = 19800 id = 9  } 
       name     = "18th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 10  } 
       name     = "36th Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 5
      }
	 division = 
     { id       = {  type = 19800 id = 11  } 
       name     = "453rd Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 5
      }
	 }
###########
	 landunit = 
   { location = 386
     name     = "17th Corps" 
     id       = {  type = 19800 id = 12  } 
     division = 
     { id       = {  type = 19800 id = 13  } 
       name     = "12th Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 14  } 
       name     = "327th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 division = 
     { id       = {  type = 19800 id = 15  } 
       name     = "395th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_artillery
       brigade_model = 5
      }
	 }
###########
	    landunit = 
   { location = 6560
     name     = "24th Corps" 
     id       = {  type = 19800 id = 16  } 
	 division = 
     { id       = {  type = 19800 id = 17  } 
       name     = "2nd Army HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 5
      }
     division = 
     { id       = {  type = 19800 id = 18  } 
       name     = "80th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 }
########
	    landunit = 
   { location = 453
     name     = "1st Mechanized Guard Division" 
     id       = {  type = 19800 id = 19  } 
	 division = 
     { id       = {  type = 19800 id = 20  } 
       name     = "3nd Army HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 5
      }
     division = 
     { id       = {  type = 19800 id = 21  } 
       name     = "1st Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 22  } 
       name     = "2nd Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 5
      }
	 division = 
     { id       = {  type = 19800 id = 23  } 
       name     = "3rd Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 80 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 }
########
	 landunit = 
   { location = 5464
     name     = "2nd Corps" 
     id       = {  type = 19800 id = 24  } 
     division = 
     { id       = {  type = 19800 id = 25  } 
       name     = "5th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 26  } 
       name     = "427th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	}
##########
	 landunit = 
   { location = 451
     name     = "21st Corps" 
     id       = {  type = 19800 id = 27  } 
     division = 
     { id       = {  type = 19800 id = 28  } 
       name     = "211th MechInf Brigade" 
       type     = d_06 
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 19800 id = 29  } 
       name     = "203rd Infantry Brigade" 
       type     = d_02 
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	}
##########
	 landunit = 
   { location = 3374
     name     = "41st Corps" 
     id       = {  type = 19800 id = 30  } 
     division = 
     { id       = {  type = 19800 id = 31  } 
       name     = "243rd MechInf Brigade" 
       type     = d_06 
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 19800 id = 32  } 
       name     = "150th Infantry Brigade" 
       type     = d_02 
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	}
##########
	    landunit = 
   { location = 415
     name     = "52nd Corps" 
     id       = {  type = 19800 id = 33  } 
	 division = 
     { id       = {  type = 19800 id = 34  } 
       name     = "4th Army HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 5
      }
     division = 
     { id       = {  type = 19800 id = 35  } 
       name     = "15th Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 50 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 }
########
	 landunit = 
   { location = 382
     name     = "10th Corps" 
     id       = {  type = 19800 id = 36  } 
     division = 
     { id       = {  type = 19800 id = 37  } 
       name     = "4th Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 50 
	   extra    = sp_artillery
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 38  } 
       name     = "140th Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 80 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 division = 
     { id       = {  type = 19800 id = 39  } 
       name     = "155th Infantry Brigade" 
       type     = d_02 
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	 }
###########
	    landunit = 
   { location = 369
     name     = "13th Corps" 
     id       = {  type = 19800 id = 40  } 
	 division = 
     { id       = {  type = 19800 id = 41  } 
       name     = "13th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 19800 id = 42  } 
       name     = "622nd Motorized Brigade" 
       type     = d_02
       model    = 5 
       strength = 50 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 }
########
	 landunit = 
   { location = 380
     name     = "14th Corps" 
     id       = {  type = 19800 id = 43  } 
     division = 
     { id       = {  type = 19800 id = 44  } 
       name     = "1st Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 50 
	   extra    = sp_artillery
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 45  } 
       name     = "228th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 division = 
     { id       = {  type = 19800 id = 46  } 
       name     = "253rd Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = artillery
       brigade_model = 2
      }
	 }
###########
	    landunit = 
   { location = 459
     name     = "31st Corps" 
     id       = {  type = 19800 id = 47  } 
	 division = 
     { id       = {  type = 19800 id = 48  } 
       name     = "32nd Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 15 
	   extra    = sp_artillery
       brigade_model = 5
      }
     division = 
     { id       = {  type = 19800 id = 49  } 
       name     = "345th Mountain Brigade" 
       type     = d_09
       model    = 5 
       strength = 80 
	   
      }
	 }
########
	 landunit = 
   { location = 6535
     name     = "32nd Corps" 
     id       = {  type = 19800 id = 50  } 
     division = 
     { id       = {  type = 19800 id = 51  } 
       name     = "32nd Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 52  } 
       name     = "265th Mechanized Brigade" 
       type     = d_06 
       model    = 5 
       strength = 50 
	   extra    = sp_anti_air
       brigade_model = 5
      }
	 division = 
     { id       = {  type = 19800 id = 53  } 
       name     = "580th Infantry Brigade" 
       type     = d_02 
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	 }
###########
	 landunit = 
   { location = 3357
     name     = "5th Corps" 
     id       = {  type = 19800 id = 54  } 
     division = 
     { id       = {  type = 19800 id = 55  } 
       name     = "5th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_artillery
       brigade_model = 5
      }
	}
##########
	 landunit = 
   { location = 384
     name     = "8th Corps" 
     id       = {  type = 19800 id = 56  } 
     division = 
     { id       = {  type = 19800 id = 57  } 
       name     = "12th Marine Brigade" 
       type     = d_05 
       model    = 5 
       strength = 15 
	   extra    = sp_artillery
       brigade_model = 5
      }
	}
##########
	    landunit = 
   { location = 6559
     name     = "7th Corps" 
     id       = {  type = 19800 id = 58  } 
	 division = 
     { id       = {  type = 19800 id = 59  } 
       name     = "24th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 50 
	   extra    = sp_artillery
       brigade_model = 5
      }
     division = 
     { id       = {  type = 19800 id = 60  } 
       name     = "107th Infantry Brigade" 
       type     = d_09
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	 }
########
	 landunit = 
   { location = 3366
     name     = "9th Corps" 
     id       = {  type = 19800 id = 61  } 
     division = 
     { id       = {  type = 19800 id = 62  } 
       name     = "180th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 15 
	   extra    = sp_artillery
       brigade_model = 5
      }
	  division = 
     { id       = {  type = 19800 id = 63  } 
       name     = "108th Infantry Brigade" 
       type     = d_02 
       model    = 5 
       strength = 50 
	   extra    = artillery
       brigade_model = 2
      }
	 division = 
     { id       = {  type = 19800 id = 64  } 
       name     = "9th Mechanized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 50 
	   extra    = sp_artillery
       brigade_model = 5
      }
	 }
# ################# 
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 19800 id = 65 }
	name = "1st Air Corps"
	location = 453 
	base = 453 
	division = {
	id = { type = 19800 id = 66 }
		name = "No 1 Wing"
		strength = 100
		type = multi_role
		model = 7
		}
	division = {
	id = { type = 19800 id = 67 }
		name = "No 2 Wing"
		strength = 100
		type = multi_role
		model = 7
		}
	division = {
	id = { type = 19800 id = 68 }
		name = "No 3 Wing"
		strength = 100
		type = interceptor
		model = 5
		}
	division = {
	id = { type = 19800 id = 69 }
		name = "No 9 Wing"
		strength = 100
		type = cas
		model = 5
		}
	}
##########
airunit = {
	id = { type = 19800 id = 70 }
	name = "2nd Air Corps"
	location = 382 
	base = 382 
	division = {
	id = { type = 19800 id = 71 }
		name = "No 11 Wing"
		strength = 100
		type = multi_role
		model = 7
		}
	division = {
	id = { type = 19800 id = 72 }
		name = "No 12 Wing"
		strength = 100
		type = multi_role
		model = 7
		}
	division = {
	id = { type = 19800 id = 73 }
		name = "No 13 Wing"
		strength = 100
		type = interceptor
		model = 5
		}
	division = {
	id = { type = 19800 id = 74 }
		name = "No 19 Transport Wing"
		strength = 100
		type = transport_plane
		model = 3
		}
	}
##########
airunit = {
	id = { type = 19800 id = 75 }
	name = "3rd Air Corps"
	location = 451 
	base = 451 
	division = {
	id = { type = 19800 id = 76 }
		name = "No 111 Wing"
		strength = 100
		type = multi_role
		model = 7
		}
	division = {
	id = { type = 19800 id = 77 }
		name = "No 112 Wing"
		strength = 100
		type = multi_role
		model = 7
		}
	division = {
	id = { type = 19800 id = 78 }
		name = "No 113 Wing"
		strength = 100
		type = interceptor
		model = 5
		}
	division = {
	id = { type = 19800 id = 79 }
		name = "No 119 Transport Wing"
		strength = 100
		type = transport_plane
		model = 3
		}
	}
###################
## NAVY
###############
	navalunit =  {
		name = "12th Light Naval Brigade"  
		id = {  type = 19800 id = 80  }  
		location = 384  
		base     = 384  
		division = {
			id = {  type = 19800 id = 81  }  
			name = "RF-31"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 19800 id = 82  }  
			name = "RF-32"  
			type = light_cruiser #Koni-class
			model = 4
		}
	}
##########
	navalunit =  {
		name = "22nd Light Naval Brigade"  
		id = {  type = 19800 id = 83  }  
		location = 389  
		base     = 389  
		division = {
			id = {  type = 19800 id = 84  }  
			name = "RF-33"  
			type = light_cruiser 
			model = 3
		}
		division = {
			id = {  type = 19800 id = 85  }  
			name = "RF-34"  
			type = light_cruiser 
			model = 3
		}
	}
##########
	navalunit =  {
		name = "32nd Light Naval Brigade"  
		id = {  type = 19800 id = 86 }  
		location = 384  
		base     = 384  
		division = {
			id = {  type = 19800 id = 87  }  
			name = "Heroj"  
			type = submarine 
			model = 5
		}
		division = {
			id = {  type = 19800 id = 88  }  
			name = "Junak"  
			type = submarine 
			model = 5
		}
		division = {
			id = {  type = 19800 id = 89  }  
			name = "Uskok"  
			type = submarine 
			model = 5
		}
		
	}
##########
	navalunit =  {
		name = "42nd Light Naval Brigade"  
		id = {  type = 19800 id = 90 }  
		location = 384  
		base     = 384  
		division = {
			id = {  type = 19800 id = 91  }  
			name = "Sava"  
			type = submarine 
			model = 5
		}
		division = {
			id = {  type = 19800 id = 92  }  
			name = "Drava"  
			type = submarine 
			model = 5
		}
	}
}

		