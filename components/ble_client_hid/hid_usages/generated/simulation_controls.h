#include "usages.h"

const Usage* const USAGE_FLIGHT_SIMULATION_DEVICE = new Usage(1,"Flight Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_AUTOMOBILE_SIMULATION_DEVICE = new Usage(2,"Automobile Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TANK_SIMULATION_DEVICE = new Usage(3,"Tank Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SPACESHIP_SIMULATION_DEVICE = new Usage(4,"Spaceship Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SUBMARINE_SIMULATION_DEVICE = new Usage(5,"Submarine Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SAILING_SIMULATION_DEVICE = new Usage(6,"Sailing Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_MOTORCYCLE_SIMULATION_DEVICE = new Usage(7,"Motorcycle Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SPORTS_SIMULATION_DEVICE = new Usage(8,"Sports Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_AIRPLANE_SIMULATION_DEVICE = new Usage(9,"Airplane Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_HELICOPTER_SIMULATION_DEVICE = new Usage(10,"Helicopter Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_MAGIC_CARPET_SIMULATION_DEVICE = new Usage(11,"Magic Carpet Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_BICYCLE_SIMULATION_DEVICE = new Usage(12,"Bicycle Simulation Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_FLIGHT_CONTROL_STICK = new Usage(32,"Flight Control Stick", std::vector<std::string>{ "CA"});
const Usage* const USAGE_FLIGHT_STICK = new Usage(33,"Flight Stick", std::vector<std::string>{ "CA"});
const Usage* const USAGE_CYCLIC_CONTROL = new Usage(34,"Cyclic Control", std::vector<std::string>{ "CP"});
const Usage* const USAGE_CYCLIC_TRIM = new Usage(35,"Cyclic Trim", std::vector<std::string>{ "CP"});
const Usage* const USAGE_FLIGHT_YOKE = new Usage(36,"Flight Yoke", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TRACK_CONTROL = new Usage(37,"Track Control", std::vector<std::string>{ "CP"});
const Usage* const USAGE_AILERON = new Usage(176,"Aileron", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AILERON_TRIM = new Usage(177,"Aileron Trim", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ANTI_TORQUE_CONTROL = new Usage(178,"Anti-Torque Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AUTOPILOT_ENABLE = new Usage(179,"Autopilot Enable", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CHAFF_RELEASE = new Usage(180,"Chaff Release", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_COLLECTIVE_CONTROL = new Usage(181,"Collective Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DIVE_BRAKE = new Usage(182,"Dive Brake", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ELECTRONIC_COUNTERMEASURES = new Usage(183,"Electronic Countermeasures", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_ELEVATOR = new Usage(184,"Elevator", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ELEVATOR_TRIM = new Usage(185,"Elevator Trim", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RUDDER = new Usage(186,"Rudder", std::vector<std::string>{ "DV"});
const Usage* const USAGE_THROTTLE = new Usage(187,"Throttle", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FLIGHT_COMMUNICATIONS = new Usage(188,"Flight Communications", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FLARE_RELEASE = new Usage(189,"Flare Release", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_LANDING_GEAR = new Usage(190,"Landing Gear", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_TOE_BRAKE = new Usage(191,"Toe Brake", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRIGGER = new Usage(192,"Trigger", std::vector<std::string>{ "MC"});
const Usage* const USAGE_WEAPONS_ARM = new Usage(193,"Weapons Arm", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_WEAPONS_SELECT = new Usage(194,"Weapons Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_WING_FLAPS = new Usage(195,"Wing Flaps", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ACCELERATOR = new Usage(196,"Accelerator", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BRAKE = new Usage(197,"Brake", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CLUTCH = new Usage(198,"Clutch", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SHIFTER = new Usage(199,"Shifter", std::vector<std::string>{ "DV"});
const Usage* const USAGE_STEERING = new Usage(200,"Steering", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TURRET_DIRECTION = new Usage(201,"Turret Direction", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BARREL_ELEVATION = new Usage(202,"Barrel Elevation", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DIVE_PLANE = new Usage(203,"Dive Plane", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BALLAST = new Usage(204,"Ballast", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BICYCLE_CRANK = new Usage(205,"Bicycle Crank", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HANDLE_BARS = new Usage(206,"Handle Bars", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FRONT_BRAKE = new Usage(207,"Front Brake", std::vector<std::string>{ "DV"});
const Usage* const USAGE_REAR_BRAKE = new Usage(208,"Rear Brake", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_SIMULATION_CONTROLS = new UsagePage(2, "Simulation Controls", std::map<uint16_t, const Usage* const>{
	{1, USAGE_FLIGHT_SIMULATION_DEVICE},
	{2, USAGE_AUTOMOBILE_SIMULATION_DEVICE},
	{3, USAGE_TANK_SIMULATION_DEVICE},
	{4, USAGE_SPACESHIP_SIMULATION_DEVICE},
	{5, USAGE_SUBMARINE_SIMULATION_DEVICE},
	{6, USAGE_SAILING_SIMULATION_DEVICE},
	{7, USAGE_MOTORCYCLE_SIMULATION_DEVICE},
	{8, USAGE_SPORTS_SIMULATION_DEVICE},
	{9, USAGE_AIRPLANE_SIMULATION_DEVICE},
	{10, USAGE_HELICOPTER_SIMULATION_DEVICE},
	{11, USAGE_MAGIC_CARPET_SIMULATION_DEVICE},
	{12, USAGE_BICYCLE_SIMULATION_DEVICE},
	{32, USAGE_FLIGHT_CONTROL_STICK},
	{33, USAGE_FLIGHT_STICK},
	{34, USAGE_CYCLIC_CONTROL},
	{35, USAGE_CYCLIC_TRIM},
	{36, USAGE_FLIGHT_YOKE},
	{37, USAGE_TRACK_CONTROL},
	{176, USAGE_AILERON},
	{177, USAGE_AILERON_TRIM},
	{178, USAGE_ANTI_TORQUE_CONTROL},
	{179, USAGE_AUTOPILOT_ENABLE},
	{180, USAGE_CHAFF_RELEASE},
	{181, USAGE_COLLECTIVE_CONTROL},
	{182, USAGE_DIVE_BRAKE},
	{183, USAGE_ELECTRONIC_COUNTERMEASURES},
	{184, USAGE_ELEVATOR},
	{185, USAGE_ELEVATOR_TRIM},
	{186, USAGE_RUDDER},
	{187, USAGE_THROTTLE},
	{188, USAGE_FLIGHT_COMMUNICATIONS},
	{189, USAGE_FLARE_RELEASE},
	{190, USAGE_LANDING_GEAR},
	{191, USAGE_TOE_BRAKE},
	{192, USAGE_TRIGGER},
	{193, USAGE_WEAPONS_ARM},
	{194, USAGE_WEAPONS_SELECT},
	{195, USAGE_WING_FLAPS},
	{196, USAGE_ACCELERATOR},
	{197, USAGE_BRAKE},
	{198, USAGE_CLUTCH},
	{199, USAGE_SHIFTER},
	{200, USAGE_STEERING},
	{201, USAGE_TURRET_DIRECTION},
	{202, USAGE_BARREL_ELEVATION},
	{203, USAGE_DIVE_PLANE},
	{204, USAGE_BALLAST},
	{205, USAGE_BICYCLE_CRANK},
	{206, USAGE_HANDLE_BARS},
	{207, USAGE_FRONT_BRAKE},
	{208, USAGE_REAR_BRAKE},
});
