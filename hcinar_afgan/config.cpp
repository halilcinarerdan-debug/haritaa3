class CfgPatches
{
	class hcinar_afgan
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Map_Metadata", "A3_Map_Data"};
		author = "hcinar33";
		worlds[] = {"hcinar_afgan"};
	};
};

class CfgWorldList
{
	class hcinar_afgan {};
};

class CfgWorlds
{
	class CAWorld;
	class hcinar_afgan: CAWorld
	{
		access = 3;
		cutscenes[] = {};
		description = "Hcinar Afgan";
		worldName = "hcinar_afgan\hcinar_afgan.wrp";
		author = "hcinar33";
		icon = "";
		pictureMap = "";
		pictureShot = "";
		plateFormat = "ID$ - ####";
		plateLetters = "ABCDEFGHJKLMNOPRSTUVWXYZ";
		longitude = 69.2;
		latitude = 34.5;
		mapSize = 12288;
		mapArea[] = {0, 0, 12288, 12288};
		centerPosition[] = {6144, 6144, 0};
		seaLevel = -500;
		startTime = "08:00";
		startDate = "15/6/2035";
		startWeather = 0.1;
		startFog = 0;
		startFogDecay = 0.01;
		forecastWeather = 0.1;
		forecastFog = 0;
		forecastFogDecay = 0.01;
		ambient[] = {};
		clutterGrid = 1;
		clutterDist = 125;
		noDetailDist = 65;
		minTreesInForestSquare = 10;
		minRocksInRockSquare = 5;
		class Grid
		{
			offsetX = 0;
			offsetY = 12288;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		class Names {};
		#include "cfgClutter.hpp"
	};
};

#include "cfgSurfaces.hpp"

class CfgRoads
{
	class hcinar_toprak_yol
	{
		width = 6.0;
		AIpathCost = 1.0;
		mainTexture = "a3\roads_f\roads_ae\data\road_dirt_co.paa";
		endsTexture = "a3\roads_f\roads_ae\data\road_dirt_end_co.paa";
		material = "a3\roads_f\roads_ae\data\road_dirt.rvmat";
	};
};
