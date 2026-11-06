// ---------------------------------------------------------------
// CfgPatches: addon'un oyuna kendini tanittigi bolum.
// ---------------------------------------------------------------
class CfgPatches
{
	class hcinar_afgan
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		// Bu addon'dan ONCE yuklenmesi gereken addon'lar (CfgPatches sinif adlari).
		// Hepsi yuklu degilse oyun "requires addon" hatasi verir.
		requiredAddons[] = {"A3_Map_Data", "pmc_opx_buildings_cfg", "PMC_opx_misc_cfg"};
		author = "hcinar33";
		// Bu addon'un icerdigi haritalar.
		worlds[] = {"hcinar_afgan"};
	};
};

// ---------------------------------------------------------------
// CfgWorlds: haritanin kendisi.
// ---------------------------------------------------------------
class CfgWorlds
{
	class CAWorld;
	class hcinar_afgan: CAWorld
	{
		access = 3;
		cutscenes[] = {};
		// Harita secim ekraninda gorunen ad.
		description = "Hcinar Afgan";
		icon = "";
		// Terrain Builder'dan cikan .wrp dosyasinin yolu (PBO icindeki yol).
		worldName = "hcinar_afgan\hcinar_afgan.wrp";
		pictureMap = "";
		// Arac plakasi bicimi ve kullanilabilir harfler.
		plateFormat = "#Z# ## ##";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		author = "hcinar33";

		// --- Boyut ve konum ---
		// Harita kenar uzunlugu (metre): 4096 hucre x 3 m = 12288 m.
		mapSize = 12288;
		// UTM zonu.
		mapZone = 37;
		// Haritanin gercek dunyadaki koordinat kutusu: guneybati enlem/boylam, kuzeydogu enlem/boylam.
		mapArea[] = {33.4764, 38.8294, 33.5870, 38.9617};
		// Gunes ve ay konumunu belirleyen enlem/boylam.
		longitude = 38.89555;
		latitude = 33.53166;
		// Tum yuksekliklere eklenen sabit kaydirma (metre). 0 = degistirme.
		elevationOffset = 0;
		// Ambient sistemi icin "tepelik" sayilan yukseklik araligi.
		minHillsAltitude = 200;
		maxHillsAltitude = 500;
		// 2D haritada orman/kaya alani cizmek icin gereken en az agac/kaya sayisi.
		minTreesInForestSquare = 4;
		minRocksInRockSquare = 3;
		// Ortam yansima dokusu.
		envTexture = "A3\data_f\env_land_ca.paa";
		// Yol shapefile'i (Terrain Builder: Export > Roads). AI ve harita yollari bunu kullanir.
		newRoadsShape = "hcinar_afgan\data\Roads\roads.shp";

		// --- Harita disi arazi ---
		class OutsideTerrain
		{
			// Harita sinirinin otesinde gorunen uydu dokusu.
			satellite = "hcinar_afgan\data\s_satout_co.paa";
			// Dis arazi icin rastgele uretimi kapat (hafif).
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

		// --- Harita izgara (grid) ayarlari: yakinlastirdikca degisen koordinat cizgileri ---
		class Grid
		{
			offsetX = 0;
			offsetY = 12288;
			class Zoom1
			{
				// Bu zoom degerine kadar gecerli (kucuk = cok yakin).
				zoomMax = 0.05;
				format = "XY";
				formatX = "000";
				formatY = "000";
				// Izgara adimi (metre). Y eksi: kuzey yukari.
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

		// --- Baslangic zamani ve hava ---
		startTime = "10:00";
		startDate = "24/6/2035";
		// 0 = acik hava, 1 = tam bulutlu/firtinali.
		startWeather = 0.1;
		// 0 = sis yok.
		startFog = 0;
		startFogDecay = 0.01;
		forecastWeather = 0.1;
		forecastFog = 0;
		forecastFogDecay = 0.01;

		// --- Merkez ve konum referanslari ---
		// Harita merkezi (x, y, z).
		centerPosition[] = {6144, 6144, 0};
		// Martilarin (seagull) dolastigi konum.
		seagullPos[] = {6144, 130, 6144};

		// --- Havalimani ayarlari (burada havalimani yok, bos birakildi) ---
		ilsPosition[] = {0, 0};
		ilsDirection[] = {0, 0, 1};
		ilsTaxiOff[] = {};
		ilsTaxiIn[] = {};
		drawTaxiway = 0;
		class SecondaryAirports {};

		// --- Bos birakilan bolumler ---
		// Objeleri baska objelerle degistirme listesi.
		class ReplaceObjects {};
		// Harita sesleri.
		class Sounds
		{
			sounds[] = {};
		};
		// Haritaya ozel animasyonlu araclar.
		class Animation
		{
			vehicles[] = {};
		};
		// Ses haritasi izgara carpani.
		soundMapSizeCoef = 4;

		// --- Zemin dokusu karisimi ---
		// Uydu normal haritasinin detay normal haritasiyla karismaya basladigi/bittigi mesafe (m).
		satelliteNormalBlendStart = 30;
		satelliteNormalBlendEnd = 200;
		// Uydu ile detay dokusu karisiminda karartma/aydinlatma siniri.
		terrainBlendMaxDarkenCoef = 1.0;
		terrainBlendMaxBrightenCoef = 0.0;

		// --- Ot (clutter) ve zemin detay mesafeleri ---
		// Ot yogunlugu katsayisi (buyuk = daha seyrek ot).
		clutterGrid = 1.4;
		// Otlarin gorundugu mesafe (m). Bu haritada ot yok.
		clutterDist = 50;
		// Zemin detay dokusunun tamamen kayboldugu mesafe (m). Buyutursen detay daha uzaga gider.
		noDetailDist = 150;
		// Zemin detay dokusunun tam gorundugu mesafe (m).
		fullDetailDist = 30;
		class Clutter
		{
// cfgClutter.hpp bos: haritada ot/cali yok.
#include "cfgClutter.hpp"
		};

		// Harita uzerindeki yer adlari (bos).
		class Names {};
		// Eski ses sistemi, geriye uyumluluk icin bos birakildi.
		class Ambient {};

		// Rastgele guvenli konum bulma (spawn) icin referans nokta ve yaricap.
		safePositionAnchor[] = {6144, 6144};
		safePositionRadius = 100;
		// Yukleme ekraninda gorunen yazi.
		loadingTexts[] = {"Hcinar Afgan"};
	};
};

// Harita secim listesine ekleme.
class CfgWorldList
{
	class hcinar_afgan {};
};

// Zemin yuzeyleri (surface) tanimlari.
#include "cfgSurfaces.hpp"
