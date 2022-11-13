#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>

#include <VulkanToyRenderer/Renderer.h>

int main()
{
   Renderer app;

   try
   {

      // SCENE 1
      {
         //app.addSkybox("Night", "NightSky");
         app.addSkybox("BlueSky", "BlueSky");
         app.addObjectPBR(
               "Sponza",
               "Sponza.gltf",
               glm::fvec3(0.0f),
               glm::fvec3(1.0f, -1.555, 1.0f),
               glm::fvec3(0.05f)
         );
         //app.addObjectPBR(
         //      "Scene",
         //      "scene.gltf",
         //      glm::fvec3(0.0f),
         //      glm::fvec3(-1.6f, 0.0f, 0.633f),
         //      glm::fvec3(0.350f)
         //);
         app.addDirectionalLight(
               "Sun",
               "lightSphere.obj",
               glm::fvec3(1.0f),
               glm::fvec3(1.0f, 87.0f, -49.0f),
               glm::fvec3(1.461f, 2.619f, 57.457f),
               glm::fvec3(0.125f)
         );
         //app.addPointLight(
         //      "PointLight1",
         //      "lightSphere.obj",
         //      glm::fvec3(1.0f),
         //      glm::fvec3(0.0f, 0.1, 2.881f),
         //      glm::fvec3(0.125f),
         //      0.5f,
         //      3.0f
         //);
      }
      
      
      app.run();

   } catch (const std::exception& e)
   {
      std::cerr << e.what() << std::endl;

      return 0;
   }

   return 0;
}
