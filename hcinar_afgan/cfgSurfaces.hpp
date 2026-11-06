class CfgSurfaces
{
	class Default;
	class hcinar_sahel_toprak: Default
	{
		access = 2;
		files = "s_satout_*";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.2;
		lucidity = 2;
		grassCover = 0;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
		impact = "hit_sand";
		friction = 0.9;
		restitution = 0.1;
		deflection = 0.005;
		isDigable = 1;
		isFlatWater = 0;
	};
};
