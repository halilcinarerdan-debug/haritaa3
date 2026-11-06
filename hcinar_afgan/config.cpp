class CfgPatches
{
	class hcinar_afgan
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Map_Data", "pmc_opx_buildings_cfg", "PMC_opx_misc_cfg"};
		author = "hcinar33";
		worlds[] = {"hcinar_afgan"};
	};
};

class CfgWorlds
{
	class CAWorld;
	class hcinar_afgan: CAWorld
	{
		access = 3;
		cutscenes[] = {};
		description = "Hcinar Afgan";
		icon = "";
		worldName = "hcinar_afgan\hcinar_afgan.wrp";
		pictureMap = "";
		plateFormat = "#Z# ## ##";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		author = "hcinar33";
		mapSize = 12288;
		mapZone = 37;
		mapArea[] = {33.4764, 38.8294, 33.5870, 38.9617};
		longitude = 38.89555;
		latitude = 33.53166;
		elevationOffset = 0;
		minHillsAltitude = 200;
		maxHillsAltitude = 500;
		minTreesInForestSquare = 4;
		minRocksInRockSquare = 3;
		envTexture = "A3\data_f\env_land_ca.paa";
		newRoadsShape = "hcinar_afgan\data\Roads\RoadsLib.cfg";
		class OutsideTerrain
		{
			satellite = "hcinar_afgan\data\s_satout_co.paa";
			enableTerrainSynth = false;
			class Layers
			{
				class Layer0
				{
					nopx = "hcinar_afgan\data\gdt\gdt_desert_nopx.paa";
					texture = "hcinar_afgan\data\gdt\gdt_desert_co.paa";
				};
			};
			colorOutside[] = {0.227451, 0.27451, 0.384314, 1};
		};
		class Grid
		{
			offsetX = 0;
			offsetY = 12288;
			class Zoom1
			{
				zoomMax = 0.05;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.5;
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
		startTime = "10:00";
		startDate = "24/6/2035";
		centerPosition[] = {6144, 6144, 0};
		seagullPos[] = {6144, 130, 6144};
		ilsPosition[] = {0, 0};
		ilsDirection[] = {0, 0, 1};
		ilsTaxiOff[] = {};
		ilsTaxiIn[] = {};
		drawTaxiway = 0;
		class SecondaryAirports {};
		class ReplaceObjects {};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		terrainBlendMaxDarkenCoef = 1.0;
		terrainBlendMaxBrightenCoef = 0.0;
		clutterGrid = 1.4;
		clutterDist = 50;
		noDetailDist = 50;
		fullDetailDist = 8;
		class Clutter
		{
#include "cfgClutter.hpp"
		};
		class Names {};
		class Ambient {};
		safePositionAnchor[] = {6144, 6144};
		safePositionRadius = 100;
		loadingTexts[] = {"Hcinar Afgan"};
	};
};

class CfgWorldList
{
	class hcinar_afgan {};
};

#include "cfgSurfaces.hpp"
