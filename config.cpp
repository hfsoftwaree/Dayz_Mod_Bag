class CfgPatches
{
    class ZHFBRPACK
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_data",
            "DZ_Characters",
            "DZ_Characters_Headgear",
            "DZ_Characters_Pants",
            "DZ_Characters_Tops",
            "DZ_Characters_Vests"
        };
    };
};

class CfgVehicles
{
    class AssaultBag_ColorBase;
	// ===================== ZHFBACKPACK ABCAMO =====================
    class ZHFBACKPACK_AB_CAMO : AssaultBag_ColorBase
    {
        scope=2;
        displayName="ZHF Backpack ABCamo 700";
        descriptionShort="Mochila exclusiva do servidor ZHF";    
        itemsCargoSize[] = {10,70};

        attachments[]=
        {
            "shoulder",
            "WalkieTalkie"
        };

        hiddenSelectionsTextures[]=
        {
            "zhfbrpack\Bag\data\ZHFBACKPACK_AB_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_AB_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_AB_CAMO.paa"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1e9;
                    healthLevels[] = {{1.0, {}}, {0.0, {}}};
                };
            };
        };

        class CargoBase
        {
            allowDamage = 0; // Mochila nunca sofre dano
        };
    };
	
	// ===================== ZHFBACKPACK FOREST DIG CAMO =====================
	class ZHFBACKPACK_FOREST_DIG_CAMO : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Forest Dig Camo 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_FOREST_DIG_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_FOREST_DIG_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_FOREST_DIG_CAMO.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK BLACK DIG CAMO =====================
	class ZHFBACKPACK_BLACK_DIG_CAMO : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Black Dig Camo 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_BLACK_DIG_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_BLACK_DIG_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_BLACK_DIG_CAMO.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK BLACK MARBLE =====================
	class ZHFBACKPACK_BLACK_MARBLE : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Black Marble 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_BLACK_MARBLE.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_BLACK_MARBLE.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_BLACK_MARBLE.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK EMERALD CAMO =====================
	class ZHFBACKPACK_EMERALD_CAMO : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Emerald Camo 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_EMERALD_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_EMERALD_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_EMERALD_CAMO.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK FIRE =====================
	class ZHFBACKPACK_FIRE : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Fire 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_FIRE.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_FIRE.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_FIRE.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK GRAFFITI CAMO =====================
	class ZHFBACKPACK_GRAFFIT_CAMO : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Graffit Camo 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_GRAFFIT_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GRAFFIT_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GRAFFIT_CAMO.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK GRAFFITI GREY =====================
	class ZHFBACKPACK_GRAFFIT_GREY : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Graffit Grey 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_GRAFFIT_GREY.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GRAFFIT_GREY.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GRAFFIT_GREY.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK GREEN BLACK =====================
	class ZHFBACKPACK_GREEN_BLACK : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Green Black 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_BLACK.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_BLACK.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_BLACK.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK GREEN CAMO =====================
	class ZHFBACKPACK_GREEN_CAMO : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Green Camo 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_CAMO.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_CAMO.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK GREEN MARBLE =====================
	class ZHFBACKPACK_GREEN_MARBLE : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Green Marble 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_MARBLE.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_MARBLE.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_GREEN_MARBLE.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};
	
	// ===================== ZHFBACKPACK NEON =====================
    class ZHFBACKPACK_NEON : AssaultBag_ColorBase
    {
        scope=2;
        displayName="ZHF Backpack Neon 700";
        descriptionShort="Mochila exclusiva do servidor ZHF";    
        itemsCargoSize[] = {10,70};

        attachments[]=
        {
            "shoulder",
            "WalkieTalkie"
        };

        hiddenSelectionsTextures[]=
        {
            "zhfbrpack\Bag\data\ZHFBACKPACK_NEON.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_NEON.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_NEON.paa"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1e9;
                    healthLevels[] = {{1.0, {}}, {0.0, {}}};
                };
            };
        };

        class CargoBase
        {
            allowDamage = 0; // Mochila nunca sofre dano
        };
    };
	
	// ===================== ZHFBACKPACK PAINT =====================
	class ZHFBACKPACK_PAINT : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Paint 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_PAINT.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_PAINT.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_PAINT.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

	// ===================== ZHFBACKPACK SUNSPOT =====================
	class ZHFBACKPACK_SUNSPOT : AssaultBag_ColorBase
	{
		scope=2;
		displayName="ZHF Backpack Sunspot 700";
		descriptionShort="Mochila exclusiva do servidor ZHF";    
		itemsCargoSize[] = {10,70};

		attachments[]=
		{
			"shoulder",
			"WalkieTalkie"
		};

		hiddenSelectionsTextures[]=
		{
			"zhfbrpack\Bag\data\ZHFBACKPACK_SUNSPOT.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_SUNSPOT.paa",
			"zhfbrpack\Bag\data\ZHFBACKPACK_SUNSPOT.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1e9;
					healthLevels[] = {{1.0, {}}, {0.0, {}}};
				};
			};
		};

		class CargoBase
		{
			allowDamage = 0; // Mochila nunca sofre dano
		};
	};

    // ===================== ZHFBACKPACK1 =====================
    class ZHFBACKPACK1 : AssaultBag_ColorBase
    {
        scope=2;
        displayName="ZHF Backpack Alpine 700";
        descriptionShort="Mochila exclusiva do servidor ZHF";    
        itemsCargoSize[] = {10,70};

        attachments[]=
        {
            "shoulder",
            "WalkieTalkie"
        };

        hiddenSelectionsTextures[]=
        {
            "zhfbrpack\Bag\data\ZHFBACKPACK1.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK1.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK1.paa"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1e9;
                    healthLevels[] = {{1.0, {}}, {0.0, {}}};
                };
            };
        };

        class CargoBase
        {
            allowDamage = 0; // Mochila nunca sofre dano
        };
    };

    // ===================== ZHFBACKPACK2 =====================
    class ZHFBACKPACK2 : AssaultBag_ColorBase
    {
        scope=2;
        displayName="ZHF Backpack Black 700";
        descriptionShort="Mochila exclusiva do servidor ZHF";    
        itemsCargoSize[]={10,70};

        attachments[]=
        {
            "shoulder",
            "WalkieTalkie"
        };

        hiddenSelectionsTextures[]=
        {
            "zhfbrpack\Bag\data\ZHFBACKPACK2.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK2.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK2.paa"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1e9;
                    healthLevels[] = {{1.0, {}}, {0.0, {}}};
                };
            };
        };

        class CargoBase
        {
            allowDamage = 0;
        };
    };

    // ===================== ZHFBACKPACK3 =====================
    class ZHFBACKPACK3 : AssaultBag_ColorBase
    {
        scope=2;
        displayName="ZHF Backpack Alpine 250";
        descriptionShort="Mochila exclusiva do servidor ZHF";    
        itemsCargoSize[] = {10,25};

        attachments[]=
        {
            "shoulder",
            "WalkieTalkie"
        };

        hiddenSelectionsTextures[]=
        {
            "zhfbrpack\Bag\data\ZHFBACKPACK3.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK3.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK3.paa"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1e9;
                    healthLevels[] = {{1.0, {}}, {0.0, {}}};
                };
            };
        };

        class CargoBase
        {
            allowDamage = 0;
        };
    };

    // ===================== ZHFBACKPACK4 =====================
    class ZHFBACKPACK4 : AssaultBag_ColorBase
    {
        scope=2;
        displayName="ZHF Backpack Black 250";
        descriptionShort="Mochila exclusiva do servidor ZHF";    
        itemsCargoSize[]={10,25};

        attachments[]=
        {
            "shoulder",
            "WalkieTalkie"
        };

        hiddenSelectionsTextures[]=
        {
            "zhfbrpack\Bag\data\ZHFBACKPACK4.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK4.paa",
            "zhfbrpack\Bag\data\ZHFBACKPACK4.paa"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1e9;
                    healthLevels[] = {{1.0, {}}, {0.0, {}}};
                };
            };
        };

        class CargoBase
        {
            allowDamage = 0;
        };
    };
};


class CfgMods
{
    class ZHFBRPACK
    {
        dir="Bag";
        picture="";
        action="";
        hideName=0;
        hidePicture=1;
        name="ZHF Bag";
        credits="HF";
        author="HF";
        authorID="0";
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]=
		{
			"World"
		};
		class defs
        {
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "zhfbrpack\Bag\data"
                };
            };
        };
	};	
};
