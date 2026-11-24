# 🎒 ZHF Bag – Mochilas Customizadas para DayZ

Mod de **mochilas customizadas** para **DayZ Standalone**, desenvolvido para o servidor **ZHF**. Adiciona 18 variações de mochila com texturas exclusivas, grande capacidade de carga, suporte a rádio (Walkie Talkie) e durabilidade infinita.

---

## ✨ Funcionalidades

- 🎨 **18 mochilas** com texturas personalizadas (`.paa`)
- 📦 **Duas capacidades**: 700 slots (10x70) e 250 slots (10x25)
- 📻 **Slots de attachment**: ombro (`shoulder`) e `WalkieTalkie`
- 🛡️ **Indestrutíveis**: a mochila nunca sofre dano (`allowDamage = 0` e `hitpoints = 1e9`)
- 🧱 Herdam da classe base `AssaultBag_ColorBase`, mantendo o modelo e as animações vanilla

---

## 🎒 Mochilas disponíveis

### Capacidade 700 (10x70)

| Classname | Nome no jogo |
|---|---|
| `ZHFBACKPACK_AB_CAMO` | ZHF Backpack ABCamo 700 |
| `ZHFBACKPACK_FOREST_DIG_CAMO` | ZHF Backpack Forest Dig Camo 700 |
| `ZHFBACKPACK_BLACK_DIG_CAMO` | ZHF Backpack Black Dig Camo 700 |
| `ZHFBACKPACK_BLACK_MARBLE` | ZHF Backpack Black Marble 700 |
| `ZHFBACKPACK_EMERALD_CAMO` | ZHF Backpack Emerald Camo 700 |
| `ZHFBACKPACK_FIRE` | ZHF Backpack Fire 700 |
| `ZHFBACKPACK_GRAFFIT_CAMO` | ZHF Backpack Graffit Camo 700 |
| `ZHFBACKPACK_GRAFFIT_GREY` | ZHF Backpack Graffit Grey 700 |
| `ZHFBACKPACK_GREEN_BLACK` | ZHF Backpack Green Black 700 |
| `ZHFBACKPACK_GREEN_CAMO` | ZHF Backpack Green Camo 700 |
| `ZHFBACKPACK_GREEN_MARBLE` | ZHF Backpack Green Marble 700 |
| `ZHFBACKPACK_NEON` | ZHF Backpack Neon 700 |
| `ZHFBACKPACK_PAINT` | ZHF Backpack Paint 700 |
| `ZHFBACKPACK_SUNSPOT` | ZHF Backpack Sunspot 700 |
| `ZHFBACKPACK1` | ZHF Backpack Alpine 700 |
| `ZHFBACKPACK2` | ZHF Backpack Black 700 |

### Capacidade 250 (10x25)

| Classname | Nome no jogo |
|---|---|
| `ZHFBACKPACK3` | ZHF Backpack Alpine 250 |
| `ZHFBACKPACK4` | ZHF Backpack Black 250 |

---

## 📁 Estrutura do projeto

```
zhfbrpack/
└── Bag/
    ├── config.cpp
    └── data/
        ├── ZHFBACKPACK_AB_CAMO.paa
        ├── ZHFBACKPACK_FIRE.paa
        ├── ZHFBACKPACK1.paa
        └── ... (demais texturas)
```

---

## ⚙️ Instalação

1. Empacote a pasta do mod em um `.pbo` (usando **DayZ Tools → Addon Builder** ou **PBO Manager**).
2. Assine o `.pbo` com sua chave (`.bikey`) e coloque a chave na pasta `keys` do servidor.
3. Copie o mod para o diretório raiz do servidor (ex.: `@ZHFBag`).
4. Adicione o mod ao parâmetro de inicialização do servidor **e** dos clientes:

```
-mod=@ZHFBag
```

### Spawn no servidor (`types.xml`)

Adicione as mochilas desejadas ao `types.xml` da sua missão, por exemplo:

```xml
<type name="ZHFBACKPACK_FIRE">
    <nominal>0</nominal>
    <lifetime>3888000</lifetime>
    <restock>0</restock>
    <min>0</min>
    <quantmin>-1</quantmin>
    <quantmax>-1</quantmax>
    <cost>100</cost>
    <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="0" deloot="0"/>
    <category name="clothes"/>
</type>
```

Também é possível entregá-las por kits de spawn, loja ou administração (ex.: via Expansion, Trader ou menu de admin).

---

## 🔧 Personalização

Cada mochila é definida em `config.cpp`. Para criar uma nova variação:

1. Adicione a textura `.paa` em `Bag/data/`.
2. Duplique um bloco de classe existente e altere o nome da classe, `displayName` e o caminho em `hiddenSelectionsTextures[]`.
3. Ajuste a capacidade em `itemsCargoSize[] = {colunas, linhas};`.

```cpp
class ZHFBACKPACK_EXEMPLO : AssaultBag_ColorBase
{
    scope=2;
    displayName="ZHF Backpack Exemplo 700";
    itemsCargoSize[] = {10,70};
    hiddenSelectionsTextures[]=
    {
        "zhfbrpack\Bag\data\ZHFBACKPACK_EXEMPLO.paa",
        "zhfbrpack\Bag\data\ZHFBACKPACK_EXEMPLO.paa",
        "zhfbrpack\Bag\data\ZHFBACKPACK_EXEMPLO.paa"
    };
};
```

---

## 🧰 Tecnologias

- **DayZ Modding** (`config.cpp`: `CfgPatches`, `CfgVehicles`, `CfgMods`)
- **DayZ Tools** (Addon Builder, Texture Viewer / TexView2)
- Texturas no formato `.paa`

---

## 👤 Autor

Desenvolvido por **HF** para o servidor **ZHF**.


